/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:18:10 by oqatim            #+#    #+#             */
/*   Updated: 2023/09/21 17:18:12 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstring>
#include <cctype>
#include <string>
#include <iomanip>

class Convert
{
    private :
        std::string input;
    public :
        Convert();
        Convert(const Convert &obj);
        Convert & operator=(const Convert &obj);
        
        std::string getType(std::string str);
        void to_char(std::string inp);
        void to_int(std::string inp);
        void to_float(std::string inp);
        void to_double(std::string inp);
        
        void converter(std::string type, std::string input);

        ~Convert();
};

#endif