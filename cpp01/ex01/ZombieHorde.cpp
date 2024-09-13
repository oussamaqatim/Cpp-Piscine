/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 17:26:00 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/07 15:47:56 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name)
{
    int i;
    
    Zombie *z = new Zombie[N];
    if (!z)
        return (NULL);
    if (N < 1)
        return (NULL);
    i = -1;
    while (++i < N)
    {
        z[i].setname(name);
        z[i].announce();
    }
    return (z);
}
