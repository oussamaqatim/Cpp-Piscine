/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:18:02 by oqatim            #+#    #+#             */
/*   Updated: 2023/09/25 18:02:07 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert()
{

}

Convert::Convert(const Convert &object)
{
    *this = object;
}

Convert & Convert::operator=(const Convert &object)
{
    if(this != &object)
    {
        this->input = object.input;
    }
    return (*this);
}

std::string check_float(std::string str)
{
	int len = 0;
	if (((str[str.size() - 2]) != '.') && (isdigit(str[str.size() - 2]) == 0))
		return ("NULL");
	for (size_t i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == '-' || str[i] == '+')
		{
			i++;
		}
		if (str[i] == '.')
			len++;
		if (!isdigit(str[i]))
        {
			if (!(str[i] == '.' && len <= 1))
				return ("NULL");
        }
	}
	if (len == 0)
		return ("NULL");
	return ("float");
}

std::string check_double(std::string str)
{
	int count = 0;
	size_t i = 0;
	if (!isdigit(str[str.size() - 1]))
		return ("NULL");
	while (i < str.size())
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] == '.')
			count++;
		if (!isdigit(str[i]))
			if (!(str[i] == '.' && count <= 1))
				return ("NULL");
		i++;
	}
	return ("double");
}

std::string check_int(std::string str)
{
	if (str.length() == 1)
	{
		if (str[0] >= '0' && str[0] <= '9')
			return ("int");
		else
			return ("NULL"); 
	}
	else
	{
		for (size_t i = 0; i < str.length(); i++)
		{
            if ((str[i] == '+' || str[i] == '-') && i == 0)
			{
                i++;
			}
            if (!isdigit(str[i]))
			{
                return ("NULL");
			}
		}
		return ("int");
	}
}

std::string Convert::getType(std::string str)
{
	if (str.length() == 1)
	{
		char c = str[0];
		if (c >= '0' && c <= '9')
			return ("int");
		else if (c >= 32 && c <= 126)
			return ("char");
		else
			return ("NULL");
	}
	else if (str.length() > 3 && str[str.length() - 1] == 'f' )
	{
        if (check_float(str) == "float")
            return ("float");
        else
        {
            return ("NULL");
        }
	}
	else if (str.length() > 2 && str.find('.') != std::string::npos)
	{
          if (check_double(str) == "double")
            return ("double");
        else
            return ("NULL");
	}
	else if (str.length() > 1)
    {
        for (size_t i = 0; i < str.length(); i++)
		{
			if (str[i] == '+' || str[i] == '-')
				i++;
            if (!isdigit(str[i]))
                return ("NULL");
		}
		return ("int");
    }
	else if (str == "nan" || str == "+inf" || str == "-inf" || str == "+inff"|| str == "-inff" || str == "nanf")
		return (str);
    else
    {
		return ("NULL");
    }
}

void char_to_all(std::string str)
{
    char c = str[0];
	std::cout << "char: '" << c << "' "<< std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) <<".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) <<".0" << std::endl;
}

void int_to_all(std::string str)
{
	int i = std::stoi(str);
    if (isprint(i))
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (i < INT_MIN || i > INT_MAX)
        std::cout << "int: overflow" << std::endl;
    else
        std::cout << "int: " << i << std::endl;
	std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;

}

void		float_to_all(std::string str)
{
    float i = std::stof(str);
	if (isprint(i))
        std::cout << "char: '" << static_cast<char>(i) << "'" <<std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if ((i < INT_MIN || i > INT_MAX))
        std::cout << "int: overflow" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    if ( i == static_cast<int>(i))
        std::cout << "float: " << i << ".0f"<< std::endl;
    else
        std::cout << "float: " << i << "f"<< std::endl;
    if (static_cast<double>(i) == static_cast<int>(i))
	    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
    else
        std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void    double_to_all(std::string str)
{
    double i = std::stod(str);
	if (isprint(i))
        std::cout << "char: '" << static_cast<char>(i) << "'"<<std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if ((i < INT_MIN || i > INT_MAX))
        std::cout << "int: overflow" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    if (static_cast<float>(i) == static_cast<int>(i))
        std::cout << "float: " << static_cast<float>(i) << ".0f"<< std::endl;
    else
        std::cout << "float: " << static_cast<float>(i) << "f"<< std::endl;
    if (i == static_cast<int>(i))
	    std::cout << "double: " << i << ".0" << std::endl;
    else
        std::cout << "double: " << i << std::endl;
}

void    convertNan(std::string str)
{
    std::cout<<"char: impossible"<<std::endl;
    std::cout<<"int: impossible"<<std::endl;
    if (str == "nan" || str == "nanf")
    {
        std::cout<<"float: nanf"<<std::endl;
        std::cout<<"double: nan"<<std::endl;
    }
    else if (str == "+inf" || str == "+inff")
    {
        std::cout<<"float : inff"<<std::endl;
        std::cout<<"double : inf"<<std::endl;
    }
    else if (str == "-inf" || str == "-inff")
    {
        std::cout<<"float: -inff"<<std::endl;
        std::cout<<"double: -inf"<<std::endl;
    }
}

void Convert::converter(std::string type, std::string str)
{
	if (type == "int")
        int_to_all(str);    
    else if (type == "char")
    {
        char_to_all(str);
    }
    else if (type == "double")
    {
        double_to_all(str);
    }
    else if (type == "float")
    {
        float_to_all(str);
    }
	else if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
		convertNan(str);
	else if (type == "NULL")
        std::cout << "Invalid input" << std::endl;
}

Convert::~Convert()
{

}