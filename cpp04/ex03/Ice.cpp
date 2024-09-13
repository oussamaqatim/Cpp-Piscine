/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:48:41 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/21 17:01:15 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    this->type = "ice";
    // std::cout << "Constractor ------- Ice ------- called !" << std::endl;
}

Ice::Ice(Ice const & object)
{
    this->type = "ice";
    *this = object;
}

Ice &Ice::operator=(const Ice& object)
{
    if (this != &object)
    {
        this->type = object.type;
    }
    return (*this);
}

AMateria* Ice::clone() const
{
    Ice* cloneIce = new Ice();
    *cloneIce = *this;
    return (cloneIce); 
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice()
{
    // std::cout << "Destructor ******* Ice ******* called !" << std::endl;
}