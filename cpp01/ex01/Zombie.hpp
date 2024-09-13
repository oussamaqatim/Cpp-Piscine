/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 09:09:57 by oqatim            #+#    #+#             */
/*   Updated: 2023/03/31 17:26:41 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        // Zombie(std::string name);
        ~Zombie();
        void setname(std::string name);
        void announce();
};

Zombie *newzombie(std::string);
Zombie* zombieHorde( int N, std::string name);

#endif