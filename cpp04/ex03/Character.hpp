/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 17:39:17 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/20 23:42:34 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{

    private:
        AMateria *inventair[4];
        std::string name;
        int index;
    public:
        Character();
        Character(std::string name);
        Character(Character const &object);
        Character & operator=(Character const &object);
    
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
        AMateria *getaddr(int index);
        ~Character();
};

#endif