/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:37:58 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/18 22:37:32 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constracter ******** Cat ******** called !" << std::endl;
    this->type = "Cat";
}

Cat::Cat(const Cat &object)
{
    *this = object;
}

Cat &Cat::operator=(const Cat &object)
{
    if (this != &object)
    {
        this->type = object.type;
    }
    return (*this);
}

std::string Cat::getType() const
{
    return (this->type);
}

void Cat::makeSound() const
{
    std::cout << "Sound --> Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor ********* Cat ******* called ! " << std::endl;

}