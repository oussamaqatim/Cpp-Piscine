/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 22:37:07 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/21 17:00:31 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
    protected:
        std::string type;
    public:
        AMateria();
        AMateria(std::string Type);
        AMateria(AMateria const &object);
        AMateria& operator=(AMateria const & object);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);

        virtual ~AMateria();
};

#endif