/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:38:07 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/20 02:29:37 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Brain *bcat = new Brain;
    bcat->setideas("I Love Fish ...");
    Brain *bdog = new Brain;
    bdog->setideas("I Want i Bitch(Female Dog)");
    
    std::cout << "************************************************************" << std::endl;
    int N = 3;
    Animal *Animals[N];
    for (int i = 0; i < N; i++)
    {
        if (i < (N / 2))
        {
            Animals[i] = new Cat(bcat);
        }
        else
        {
            Animals[i] = new Dog(bdog);
        }
    }
    std::cout << "************************************************************" << std::endl;
    for (int i = 0; i < N; i++)
    {
        delete Animals[i];
        std::cout << "-----------------------------------" << std::endl;   
    }
    std::cout << "************************************************************" << std::endl;
    delete bcat;
    delete bdog;
}