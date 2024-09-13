/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:38:03 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/18 22:37:32 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Constracter ******** Dog ******** called !" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &object)
{
    *this = object;
}

Dog &Dog::operator=(const Dog &object)
{
    if (this != &object)
    {
        this->type = object.type;
    }
    return (*this);
}

std::string Dog::getType() const
{
    return (this->type);
}

void Dog::makeSound() const
{
    std::cout << "Sound --> Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor ********* Dog   ******* called !" << std::endl;

}