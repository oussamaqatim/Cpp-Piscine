/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:38:01 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/20 00:37:19 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain* brain; 
    public:
        Cat();
        Cat(Brain *b);
        Cat(const Cat &object);
        Cat &operator= (const Cat &object);
        
        Brain *getBrain() const;
        void makeSound() const;
        ~Cat();
};

#endif