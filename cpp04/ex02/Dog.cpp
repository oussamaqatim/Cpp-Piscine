/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:38:03 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/20 02:44:34 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Default Constracter ******** Dog ******** called !" << std::endl;
    this->brain = new Brain();
}

Dog::Dog(Brain *b)
{
    this->brain = new Brain();
    this->brain->setideas(b->getideas(0));
}

Dog::Dog(const Dog &object)
{
    *this = object;
}

Dog &Dog::operator=(const Dog &object)
{
    if (this != &object)
    {
        delete(brain);
        this->brain = new Brain();
        *this->brain = *object.brain;
    }
    return (*this);
}

Brain *Dog::getBrain() const
{
    return (this->brain);
}

void Dog::makeSound() const
{
    std::cout << "Sound --> Dog" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Destructor ********* Dog ******* called ! " << std::endl;
    delete(this->brain);
}