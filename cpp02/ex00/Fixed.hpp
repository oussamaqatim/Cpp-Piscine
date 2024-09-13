/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/08 14:47:26 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/13 05:29:59 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed
{
    private :
        int                 fixPnt;
        static const int    fraction_bits = 8;
    public :
    
        Fixed();
        Fixed(const Fixed& obj);
        Fixed &operator=(const Fixed& obj);
        int     getRawBits(void) const;
        void    setRawBits(int const raw); 
        ~Fixed();

};