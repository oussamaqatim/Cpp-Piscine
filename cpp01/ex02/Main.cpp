/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:09:41 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/07 12:57:47 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "• L’adresse de la string en mémoire: "<< &str << std::endl;
    std::cout << "• L’adresse stockée dans stringPTR : "<< stringPTR << std::endl;
    std::cout << "• L’adresse stockée dans stringREF : "<< &stringREF << std::endl;
    std::cout << "------------------------------------------------"<< std::endl;
    std::cout << "• La valeur de la string: \t\t" << str << std::endl;
    std::cout << "• La valeur pointée par stringPTR: \t" << *stringPTR << std::endl;
    std::cout << "• La valeur pointée par stringREF: \t" << stringREF << std::endl;

}