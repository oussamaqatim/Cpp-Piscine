/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:47:32 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/13 05:31:33 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixPnt = 0;
}

Fixed::Fixed(const Fixed &object)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

Fixed &Fixed::operator=(const Fixed &object)
{
    if(this != &object)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->fixPnt = object.getRawBits();
    }
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->fixPnt);
}

void Fixed::setRawBits(int const raw)
{
    this->fixPnt = raw;
}


Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}