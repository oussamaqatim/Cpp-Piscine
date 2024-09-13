/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:37:50 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/18 21:58:29 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Constracter ******** Animal ******** called !" << std::endl;
    this->type = "eagle";
}

Animal::Animal(const Animal &object)
{
    *this = object;
}

Animal& Animal::operator=(const Animal &object)
{
    if (this != &object)
    {
        this->type = object.type;
    }
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}

void Animal::makeSound() const
{
    std::cout << "Sound --> eagle" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Destructor ******** Animal ******** called !" << std::endl;
}
