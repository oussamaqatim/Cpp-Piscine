/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:39:35 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/18 22:37:32 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &object)
{
    *this = object;
}

WrongCat &WrongCat::operator=(const WrongCat &object)
{
    if (this != &object)
    {
        this->type = object.type;
    }
    return (*this);
}

std::string WrongCat::getType() const
{
    return (this->type);
}

void WrongCat::makeSound() const
{
    std::cout << "Sound --> WrongCat" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "Destructor called !" << std::endl;

}