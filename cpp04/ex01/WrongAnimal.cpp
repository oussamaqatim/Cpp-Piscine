/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:38:38 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/18 22:37:32 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &object)
{
    *this = object;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &object)
{
    if (this != &object)
    {
        this->type = object.type;
    }
    return (*this);
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}

void WrongAnimal::makeSound() const 
{
    std::cout << "Sound --> WrongAnimal" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor ----- called !" << std::endl;

}