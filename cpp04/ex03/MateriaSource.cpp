/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:12:45 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/24 12:39:56 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        materia[i] = NULL;
    }
    // std::cout << "Constractor ------- MateriaSource ------- called !" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const & object)
{
    *this = object;
}

MateriaSource& MateriaSource::operator=(MateriaSource const & object)
{
    if (this != &object)
    {
        for (int i = 0; i < 4; i++)
            materia[i] = object.materia[i];
    }
    return (*this);
}

AMateria* MateriaSource::getmateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        if (materia[i] && materia[i]->getType() == type)
            return materia[i];
    return (NULL);
}

void    MateriaSource::learnMateria(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        // std::cout << "khobza****** " << std::endl;
        if (materia[i] == NULL)
        {
            materia[i] = m->clone();
            return;
        }
    }
}

AMateria*   MateriaSource::createMateria(std::string const& type)
{
    for ( int i = 0; i < 4; i++ )
    {
        if (materia[i] && materia[i]->getType() == type)
            return (materia[i]->clone());
    }
    return (NULL);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (materia[i])
            delete (materia[i]);
    }
    // std::cout << "Destructor ******* MateriaSource ******* called !" << std::endl;
}