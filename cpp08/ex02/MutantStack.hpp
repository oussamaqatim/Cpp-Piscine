/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 08:26:36 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/16 16:37:22 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <vector>


template <class T, class Container=std::deque<T> >
class MutantStack : public std::stack<T>
{
    public :
        MutantStack()
        {}
        MutantStack(const MutantStack &object)
        {
            *this = object;
        }
        MutantStack &operator=(MutantStack const &object)
		{
            if (*this != object)
                *this = object;
            return (*this);
		}
        
        typedef typename Container::iterator iterator; 
        
        iterator begin() 
        {
            return this->c.begin();
        }
        iterator end() 
        {
            return this->c.end();
        }
        ~MutantStack()
        {}
};

#endif