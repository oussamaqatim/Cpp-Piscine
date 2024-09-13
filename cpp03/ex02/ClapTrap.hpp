/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 02:56:53 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/14 17:03:10 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int HitPoints;
        int EnergyPoints ;
        int AttackDamage ;
    
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap &object);
        ClapTrap &operator= (const ClapTrap& object);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
        ~ClapTrap();
};
