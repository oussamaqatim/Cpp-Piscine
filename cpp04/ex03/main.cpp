/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:38:07 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/24 13:19:05 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"

int main()
{
    // Création des matériaux
    AMateria* ice = new Ice();
    AMateria* cure = new Cure();

    // Création d'un personnage
    ICharacter* character = new Character("random");

    // Ajout de matériaux à l'inventaire du personnage
    character->equip(ice);
    character->equip(cure);

    // Création d'un autre personnage
    ICharacter* target = new Character("bob");

    // Utilisation des matériaux
    character->use(0, *target);
    character->use(1, *target);

    character->unequip(1);
    std::cout << std::string(60, '-') << std::endl;
    character->use(0, *target);
    character->use(1, *target);
    
    // Suppression des personnages
    delete character;
    delete target;

    // Suppression des matériaux
    delete ice;
    delete cure;

    return 0;
}