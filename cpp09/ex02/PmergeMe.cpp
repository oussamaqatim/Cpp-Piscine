/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:17:50 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/30 17:02:58 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void check_valid_param(int ac, char **av)
{
    for(int i = 1; i < ac; i++)
    {
        std::string str = (std::string) av[i];
        for(size_t i = 0; i < str.length(); i++)
        {
            if (i == 0 && str.at(0) == '+')
                continue;
            if (!isdigit(str[i]))
                throw(std::runtime_error("Error : Invalid parameter!"));  
        }
    }
}
