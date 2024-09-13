/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:31:25 by oqatim            #+#    #+#             */
/*   Updated: 2023/03/31 15:56:08 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB() 
{
    std::cout << "HumanB is destroyed" << std::endl;    
}

HumanB::HumanB(std::string name): name(name)
{
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weaponB = &weapon;   
}

void HumanB::attack()
{
    if (this->weaponB)
        std::cout << this->name <<  " attacks with their " << weaponB->getType() << std::endl;
}