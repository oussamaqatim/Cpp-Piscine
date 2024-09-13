/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 02:48:10 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/21 15:14:48 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const & object);
        Cure& operator= (Cure const & object);

        AMateria* clone() const;
        void use(ICharacter& target);
        
        ~Cure();
};
#endif