/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:38:23 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/26 15:52:48 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (const char *msg)
    {
        std::cerr << "Erreur : " << msg << std::endl;
    }

    std::cout << "-----------------------------------------------------------" << "\n"; 

    try
    {
        Span sp = Span(5);
        sp.addNumber(2);
        sp.addNumber(8);
        sp.addNumber(5);
        sp.addNumber(16);
        sp.addNumber(27);
        sp.addNumber(13);

        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch (const char *msg)
    {
        std::cerr << "Erreur : " << msg << std::endl;
    }

    std::cout << "-----------------------------------------------------------" << "\n"; 
    try
    {
        std::vector<int> vec;
        Span sp(10000);
        
        for (int i = 0; i < 10000; i++){
            vec.push_back(i);
        }
        sp.addMany(vec, vec.begin(), vec.end());
        std::cout << sp.longestSpan() << std::endl;
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const char *msg)
    {
        std::cout << msg << std::endl;
    }
    

    return 0;
}