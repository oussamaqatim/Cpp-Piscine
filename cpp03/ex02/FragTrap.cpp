/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:55:55 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/14 17:58:39 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name)
{
    this->Name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 100;
    this->AttackDamage = 30;
    std::cout << "Parameterized constractor called !" << std::endl;
}

FragTrap::FragTrap(const FragTrap &object)
{
     std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

FragTrap& FragTrap::operator=(const FragTrap &object)
{
    if (this != &object)
    {
        Name = object.Name;
        HitPoints = object.HitPoints;
        EnergyPoints = object.EnergyPoints ;
        AttackDamage = object.AttackDamage;
    }
    return (*this);
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "==> high fives <==" << std::endl; 
}


FragTrap::~FragTrap()
{
    std::cout << "Destructor called !" << std::endl;
}