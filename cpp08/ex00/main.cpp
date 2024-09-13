/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:18:54 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/16 15:10:22 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    numbers.push_back(40);
    numbers.push_back(50);

    
    try
    {
        easyfind(numbers, 30);
    }
    catch (const char *msg)
    {
        std::cerr << msg << std::endl;
    }

    try
    {
        easyfind(numbers, 80);
    }
    catch (const char *msg)
    {
        std::cerr << msg << std::endl;
    }

    return 0;
}