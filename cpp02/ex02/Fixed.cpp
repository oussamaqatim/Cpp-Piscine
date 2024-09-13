/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:47:32 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/13 05:31:32 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->fixPnt = 0;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
	this->fixPnt = nbr * 256;
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
	this->fixPnt = roundf(nbr * 256);
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

float Fixed::toFloat(void) const
{
    return (float)this->fixPnt / 256;
}

int Fixed::toInt(void) const
{
    
    return this->fixPnt / 256;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

std::ostream& operator << (std::ostream& output, const Fixed& object)
{
    output << object.toFloat();
    return (output);
}

bool	Fixed::operator>(const Fixed& object) const
{
    return(this->fixPnt > object.fixPnt);
}

bool	Fixed::operator<(const Fixed& object) const
{
    return(this->fixPnt < object.fixPnt);
}

bool	Fixed::operator>=(const Fixed& object) const
{
    return(this->fixPnt >= object.fixPnt);
}

bool	Fixed::operator<=(const Fixed& object) const
{
    return(this->fixPnt <= object.fixPnt);
}

bool	Fixed::operator==(const Fixed& object) const
{
    return(this->fixPnt == object.fixPnt);
}

bool	Fixed::operator!=(const Fixed& object) const
{
    return(this->fixPnt != object.fixPnt);
}



Fixed   Fixed::operator++(int)
{
    Fixed tmp (*this);
    ++this->fixPnt;
    return (tmp);
}

Fixed   Fixed::operator++()
{
    this->fixPnt++;
    return (*this);
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp (*this);
    ++this->fixPnt;
    return (tmp);
}

Fixed   Fixed::operator--()
{
    this->fixPnt++;
    return (*this);
}


Fixed  Fixed::operator+(const Fixed& object)
{
    return (this->toFloat() + object.toFloat());
}

Fixed  Fixed::operator-(const Fixed& object)
{
    return (this->toFloat() - object.toFloat());
}

Fixed  Fixed::operator*(const Fixed& object)
{
    return ((this->toFloat() * object.toFloat()));
}

Fixed  Fixed::operator/(const Fixed& object)
{
    return (this->toFloat() / object.toFloat());
}

Fixed& Fixed::min(Fixed& object1, Fixed& object2)
{
    if (object1 > object2)
        return object2;
    return object1;
}

const Fixed& Fixed::min(const Fixed& object1, const Fixed& object2)
{
    if (object1 > object2)
        return object2;
    return object1;
}

Fixed& Fixed::max(Fixed& object1, Fixed& object2)
{
    if (object1 < object2)
        return object2;
    return object1;
}

const Fixed& Fixed::max(const Fixed& object1, const Fixed& object2)
{
    if (object1 < object2)
        return object2;
    return object1;
}