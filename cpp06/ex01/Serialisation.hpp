/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialisation.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:38:10 by oqatim            #+#    #+#             */
/*   Updated: 2023/09/21 16:54:14 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALISATION_HPP 
#define SERIALISATION_HPP   

#include <iostream>

typedef struct Data
{
    int i;
    char c;
} Data;

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif