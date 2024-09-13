/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:06:45 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/30 16:14:07 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void checkFiles(BitcoinExchange &btc, char *inpfile)
{
    std::ifstream   dataFile;
    std::ifstream   inputFile;
    
    dataFile.open("data.csv");
    if (!dataFile.good())
        throw std::runtime_error("\033[1;31mAn error occurred during read of Data File.\033[0;m");
    inputFile.open(inpfile);
    if (!inputFile.good())
        throw std::runtime_error("\033[1;31mAn error occurred during read of Input File.\033[0;m");
    btc.StartParse(dataFile, ',');
    btc.StartParse(inputFile, '|');
}

int main(int ac, char **av)
{
    BitcoinExchange btc;
    
    try
    {
        if (ac != 2)
            throw std::runtime_error("\033[1;31mBad Argument\033[0;m");
        checkFiles(btc,av[1]);
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}