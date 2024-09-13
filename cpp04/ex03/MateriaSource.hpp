/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 16:13:01 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/21 14:54:09 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materia[4];
    public:
        MateriaSource();
        MateriaSource( MateriaSource const &object);
        MateriaSource&  operator=(MateriaSource const &object);
        
        void learnMateria(AMateria*);
        AMateria* createMateria(std::string const &type);
        AMateria* getmateria(std::string const &type);


        ~MateriaSource();
};


#endif