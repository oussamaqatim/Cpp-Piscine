/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:47:26 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/13 05:31:32 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed
{
    private :
        int                 fixPnt;
        static const int    fraction_bits = 8;
    public :
    
        Fixed();
        Fixed (const int number);
        Fixed (const float number);     
        Fixed(const Fixed& obj);
        Fixed &operator=(const Fixed& obj);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

        float   toFloat (void) const;
        int     toInt (void) const; 
        ~Fixed();
};

std::ostream& operator << (std::ostream& output, const Fixed& object);