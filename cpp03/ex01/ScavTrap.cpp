/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 16:55:55 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/14 17:37:17 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
}

ScavTrap::ScavTrap(std::string name)
{
    this->Name = name;
    this->HitPoints = 100;
    this->EnergyPoints = 50;
    this->AttackDamage = 20;
    std::cout << "Parameterized constractor called !" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &object)
{
     std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &object)
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

void ScavTrap::attack(const std::string& target)
{
    if (HitPoints > 0 && EnergyPoints > 0)
    {
        EnergyPoints--;
        std::cout<<"ScavTrap "<< Name <<" attacke "<< target <<", provoquant "<< AttackDamage << " points de dégâts !"<< std::endl; 
    }
    else
    {
        if (HitPoints <= 0)
            std::cout<<"ScavTrap " << Name << " has no HitPoints "<< std::endl;
        else
            std::cout<<"ScavTrap " << Name << " has no EnergyPoints "<< std::endl;
            
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap est entré en mode Gate keeper." << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destructor called !" << std::endl;
}