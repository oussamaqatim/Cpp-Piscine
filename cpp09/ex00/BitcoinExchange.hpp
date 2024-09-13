/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 17:06:34 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/30 16:18:22 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <map>

class BitcoinExchange
{
    
    private:
        std::map<std::string, float, std::greater<std::string> > map;
    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &object);
        BitcoinExchange &operator = (const BitcoinExchange &object);
        
        void StartParse(std::ifstream &file, char verOrPipe);
        void exec(std::string &line, char verOrPipe);
        void ParseTime(std::string time);
        float ParseValue(std::string value);
        
        ~BitcoinExchange();
};

# endif