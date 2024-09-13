/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:31:37 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/07 14:21:51 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), weapon(weapon)
{
}

void HumanA::attack()
{
    std::cout << this->name <<  " attacks with their " << weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
    std::cout << "HumanA is destroyed" << std::endl;
}