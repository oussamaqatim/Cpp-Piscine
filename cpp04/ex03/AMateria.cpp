/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 22:37:16 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/21 22:05:06 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    // std::cout << "Constractor ------- AMateria ------- called !" << std::endl;
    this->type = "";
}

AMateria::AMateria(std::string Type)
{
    this->type = Type;
}

AMateria::AMateria(AMateria const &object)
{
    *this = object;
}

AMateria& AMateria::operator=(AMateria const & object)
{
    if (this != &object)
    {
        this->type = object.type;
    }
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void    AMateria::use(ICharacter& target)
{
    std::cout << "khobza" << std::endl;  
    std::cout << "AMateria " << this->type << " used on " << target.getName() << std::endl;
}

AMateria::~AMateria()
{
    // std::cout << "Destructor ******** AMateria ******** called !" << std::endl;
}