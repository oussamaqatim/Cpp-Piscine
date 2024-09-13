/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:38:05 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/20 00:48:23 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain* brain; 
    public:
        Dog();
        Dog(Brain *b);
        Dog(const Dog &object);
        Dog &operator= (const Dog &object);
        
        Brain *getBrain() const;
        void makeSound() const;
        ~Dog();
};

#endif