/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:31:31 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/07 14:15:13 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_HUMAN_A_H
# define CLASS_HUMAN_A_H

#include "Weapon.hpp"

class HumanA
{
    private :
        std::string name;
        Weapon &weapon;
    public :
        HumanA(std::string name, Weapon &weapon);
        void        attack();
        ~HumanA();
};

#endif