/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:38:07 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/20 15:38:46 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    // const Animal *ss = new Animal();
    const Animal *c = new Cat();
    const Animal *d = new Dog();
    
    c->makeSound();
    std::cout << "**************" << std::endl;
    d->makeSound();
}