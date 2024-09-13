/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 14:18:51 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/16 15:10:35 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <string>
#include <vector>

template <typename T>
void easyfind(T &container, int nb)
{

    for (size_t i = 0; i < container.size(); i++)
    {
        if (container[i] == nb)
        {
            std::cout << "La valeur " << nb << " se trouve à l'indice : " << i << std::endl;    
            return ;
        }
    }
    throw "Element Not Found";

}

#endif