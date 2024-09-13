/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 10:38:16 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/02 19:28:25 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <class T>
class Array
{
    private :
        unsigned int size;
        T *array;
    public :
        Array() : size(0), array(NULL)
        {}
        Array(unsigned int _size) : size(_size)
        {
            if (size < 1)
                array = NULL;
            else
                array = new T[size];
        }
        Array(const Array &object)
        {
            size = object.size;
            array = new T[size];
            for (unsigned int i = 0; i < size; i++)
                array[i] = object.array[i];
        }
        Array & operator=(const Array &object)
        {
            if (this != &object)
            {
                delete []array;
                size = object.size;
                array = new T[size];
                for (unsigned int i = 0; i < size; i++)
                    array[i] = object.array[i];
            }
            return (*this);
        }
        T& operator[] (unsigned int i)
        {
            if (i > size)
            {
				throw std::out_of_range("index out of range");
                
            }
            return array[i];   
        }
        unsigned int getSize()
        { 
            return size;
        }
        ~Array()
        {
            delete []array; 
        }
};


# endif