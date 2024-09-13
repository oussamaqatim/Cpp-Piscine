/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:31:09 by oqatim            #+#    #+#             */
/*   Updated: 2023/03/31 16:40:22 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->_type = type;
}

std::string Weapon::getType()
{
    return this->_type;
}

void  Weapon::setType(std::string type)
{
    this->_type = type;
}

Weapon::~Weapon()
{
    std::cout << "Weapon is destroyed" << std::endl;
}