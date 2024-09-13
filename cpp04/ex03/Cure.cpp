/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:48:50 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/21 17:01:08 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    this->type = "cure";
    // std::cout << "Constractor ------- Cure ------- called !" << std::endl;
}

Cure::Cure(Cure const & object)
{
    this->type = "cure";
    *this = object;
}

Cure &Cure::operator=(const Cure& object)
{
    if (this != &object)
    {
        this->type = object.type;
    }
    return (*this);
}

AMateria* Cure::clone() const
{
    Cure* cloneCure = new Cure();
    *cloneCure = *this;
    return (cloneCure); 
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

Cure::~Cure()
{
    // std::cout << "Destructor ******* Cure ******* called !" << std::endl;
}