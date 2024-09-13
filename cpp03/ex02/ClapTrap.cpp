/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 02:56:18 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/14 16:52:47 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
}

ClapTrap::ClapTrap(std::string name)
{
    this->Name = name;
    this->HitPoints = 10;
    this->EnergyPoints = 10;
    this->AttackDamage = 0;
    std::cout << "Parameterized constractor called !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
     std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &object)
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

void ClapTrap::attack(const std::string& target)
{
    if (HitPoints > 0 && EnergyPoints > 0)
    {
        EnergyPoints--;
        std::cout<<"ClapTrap "<< Name <<" attacks "<< target <<", causing "<< AttackDamage << " points of damage !"<< std::endl; 
    }
    else
    {
        if (HitPoints <= 0)
            std::cout<<"ClapTrap " << Name << " has no HitPoints "<< std::endl;
        else
            std::cout<<"ClapTrap " << Name << " has no EnergyPoints "<< std::endl;
            
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    HitPoints = HitPoints - amount;
    if (HitPoints > 0)
        std::cout<<"ClapTrap "<< Name <<" get damage of " << amount << " amount"<< std::endl; 
    else
        std::cout<<"ClapTrap "<< Name <<" is died ! " << std::endl;

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (HitPoints > 0 && EnergyPoints > 0)
    {
        EnergyPoints--;
        HitPoints = HitPoints + amount;
        std::cout<<"ClapTrap "<< Name <<" Repaired " << amount << " of his hitpoints" << std::endl; 
    }
    else
    {
        if (HitPoints <= 0)
            std::cout<<"ClapTrap " << Name << " has no HitPoints ! he is died ."<< std::endl;
        else
            std::cout<<"ClapTrap " << Name << " has no EnergyPoints "<< std::endl;
    }
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called !" << std::endl;
}