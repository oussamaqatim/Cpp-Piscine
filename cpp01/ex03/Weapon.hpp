/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:31:03 by oqatim            #+#    #+#             */
/*   Updated: 2023/03/31 16:39:28 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_WEAPON_H
# define CLASS_WEAPON_H

#include <iostream>

class Weapon
{
    private :
        std::string _type;
    public :
        Weapon(std::string type);
        std::string   getType();
        void                setType(std::string type);
        ~Weapon();
};
#endif