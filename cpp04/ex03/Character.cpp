/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:39:06 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/24 12:38:12 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string Name)
{
    this->name = Name;
    this->index = 0;
    for (int i = 0; i < 4; i++)
    {
        this->inventair[i] = NULL;
    }
    // std::cout << "Constractor ------- Character ------- called !" << std::endl;
}

Character::Character(Character const & object)
{
    this->name = object.name;
    for (int i = 0; i < 4; i++)
    {
        this->inventair[i] = object.inventair[i];      
    }
    *this = object;
}

Character& Character::operator=(Character const & object)
{
    if (this != &object)
    {
        this->name = object.name;
        for (int i = 0; i < 4; i++)
        {
            this->inventair[i] = object.inventair[i];
        }
    }
    return (*this);
}

void    Character::equip(AMateria* m) 
{
    if (!m)
        return ;
    if (this->index < 4)
    {
        this->inventair[index] = m->clone();
        index++;
    }
}

void    Character::unequip(int idx) 
{
    if ( idx >= 0 && idx < this->index)
    {
        this->inventair[idx] = NULL;
        
        int i = idx;
        while (i < this->index)
        {
            this->inventair[i] = this->inventair[i + 1];
            i++;
        } 
        this->index--;      
    }
}

AMateria *Character::getaddr(int idx)
{
    if (idx >= 0 && idx < this->index)
        return (this->inventair[idx]);
    return (NULL);
}

void    Character::use(int idx, ICharacter& target) 
{
    if (idx >= 0 && idx < this->index)
    {
        this->inventair[idx]->use(target);
    }
}

std::string const& Character::getName() const 
{
    return (this->name);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventair[i])
            delete (this->inventair[i]);
    }
    // std::cout << "Destructor ******** Character ******** called !" << std::endl;
}