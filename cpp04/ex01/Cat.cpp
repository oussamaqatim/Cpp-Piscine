/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:37:58 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/20 01:20:13 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Constracter ******** Cat ******** called !" << std::endl;
    this->brain = new Brain();
}

Cat::Cat(Brain *b)
{
    this->brain = new Brain();
    this->brain->setideas(b->getideas(0));
}

Cat::Cat(const Cat &object)
{
    *this = object;
}

Cat &Cat::operator=(const Cat &object)
{
    if (this != &object)
    {
        delete(brain);
        this->brain = new Brain();
        *this->brain = *object.brain;
    }
    return (*this);
}

Brain *Cat::getBrain() const
{
    return (this->brain);
}

void Cat::makeSound() const
{
    std::cout << "Sound --> Cat" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Destructor ********* Cat ******* called ! " << std::endl;
    delete(this->brain);
}