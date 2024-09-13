/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:23:26 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/07 15:47:53 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

void Zombie::announce()
{
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": is destroyed" << std::endl;
}

void    Zombie::setname(std::string str)
{
    this->name = str;
    std::cout << this->name << ": ";
}