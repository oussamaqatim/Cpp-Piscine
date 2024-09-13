/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:47:35 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/21 15:14:20 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const & object);
        Ice& operator= (Ice const & object);

        AMateria* clone() const;
        void use(ICharacter& target);
        
        ~Ice();
};

#endif