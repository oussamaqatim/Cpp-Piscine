/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:06:37 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/30 16:37:48 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &object)
{
    *this = object;
}
BitcoinExchange &BitcoinExchange::operator = (const BitcoinExchange &object)
{
    if (this != &object)
    {
        this->map = object.map;
    }
    return *this;
}

int skipSpace(const std::string& str, int i)
{
    while (str[i] && (str[i] == ' ' || str[i] == '\t'))
        i++;
    return (i);
}

void checkDateFormat(const std::string& time, int i)
{
    if (time[i + 4] != '-' || time[i + 7] != '-')
    {
        throw std::runtime_error("Error: Bad Input => " + time);
    }
}

void BitcoinExchange::ParseTime(std::string time)
{
    int month;
    int year;
    int day; 
    int i = 0;
    
    i = skipSpace(time, i);
    checkDateFormat(time, i);
    
    year = std::atoi(time.substr(i, 4).c_str());
    month = std::atoi(time.substr(i + 5, 2).c_str());
    day = std::atoi(time.substr(i + 8, 2).c_str());
    
    i += 10;
    while (time[i])
    {
        if (time[i] != ' ' && time[i] != '\t')
            throw std::runtime_error("Error: Bad Inupt => " + time); 
        i++;
    }
    if (year > 2023 || year < 2009 || month < 1 || month > 12 || day > 31 || day < 1)
    {
        throw std::runtime_error("Error: Bad Input => " + time);
    }
    
    if (day > 28 && month == 2)
    {
        throw std::runtime_error("Error: Bad Input => " + time);
    }
}

float BitcoinExchange::ParseValue(std::string value)
{
    int count = 0;
    int i = 0;

    while (value[i] && (value[i] == ' ' || value[i] == '\t'))
        i++;
    while (value[i])
    {
        if (value[i] == '.')
            count++;
        else if (value[i] == '-')
            throw std::runtime_error("Error: Not a Positive Number"); 
        else if (!isdigit(value[i]))
            throw std::runtime_error("Error: Not a valid Number");
        else if (value[i] != ' ' && value[i] != '\t' && value[i] != '.' && value[i] != '-' && !isdigit(value[i]))
            throw std::runtime_error("Error: Bad Input ");
        i++;
    }
    if (count > 1)
        throw std::runtime_error("Error: Not a valid Number");
    return (std::atof(value.c_str()));
}

void BitcoinExchange::exec(std::string& line, char verOrPipe) 
{
    try
    {
        size_t found = line.find(verOrPipe);
        if (found == std::string::npos) 
        {
            throw std::runtime_error("Error: Invalid input format");
        }

        std::string time = line.substr(0, found);
        std::string value = line.substr(found + 1);
        
        ParseTime(time);
        float validValue = ParseValue(value);

        if (verOrPipe == ',')
        {
            map[time] = validValue;
        }
        else
        {
            if (validValue > 1000)
                throw std::runtime_error("Error: Too Large Number");
            else
                std::cout << time << " => " << validValue << " = " << this->map.lower_bound(time)->second * validValue << std::endl;
        }
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void BitcoinExchange::StartParse(std::ifstream &file, char verOrPipe)
{
    std::string line;
    int count = - 1;

    while (getline(file, line))
    {
        count++;
        if (count == 0 || line.size() == 0)
            continue;
        exec(line, verOrPipe);
        line.clear();
    }
}

BitcoinExchange::~BitcoinExchange()
{
}
