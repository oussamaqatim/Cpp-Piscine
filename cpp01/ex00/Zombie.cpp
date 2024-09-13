/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:23:26 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/07 15:40:26 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
    std::cout << this->name << ": ";
}

Zombie::~Zombie()
{
    std::cout << this->name << ": is destroyed" << std::endl;
}
