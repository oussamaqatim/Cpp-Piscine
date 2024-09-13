/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:47:22 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/30 14:50:10 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int ac, char **av)
{
    Rpn test;
    try
    {
        if (ac != 2)
            throw std::runtime_error("Error: Bad Argument");
        test.validOperation(av[1]);
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}