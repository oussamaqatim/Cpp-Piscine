/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:31:18 by oqatim            #+#    #+#             */
/*   Updated: 2023/03/31 15:57:22 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_HUMAN_B_H
# define CLASS_HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
    private :
        std::string name;
        Weapon *weaponB;
    public :
        HumanB(std::string name);
        void        attack();
        void        setWeapon(Weapon &weapon);
        ~HumanB();
};
#endif