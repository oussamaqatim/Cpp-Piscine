/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:37:56 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/20 15:41:36 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &object);
        Animal &operator= (const Animal& object);
        
        virtual std::string getType() const;
        virtual void makeSound() const = 0;
    
        virtual ~Animal();
};

#endif