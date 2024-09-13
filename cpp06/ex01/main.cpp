/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:18:40 by oqatim            #+#    #+#             */
/*   Updated: 2023/09/21 17:18:42 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialisation.hpp"

int main()
{
    Data originalData;
    originalData.i = 42;
    originalData.c = 'o';

    uintptr_t uintptr;


    uintptr = serialize(&originalData);
    Data* deserializedPtr = deserialize(uintptr);
	
	std::cout << "new ==> i: " << deserializedPtr->i << std::endl;
	std::cout << "new ==> c: " << deserializedPtr->c << std::endl; 

    if (deserializedPtr == &originalData)
        std::cout << "Serialization and deserialization successful." << std::endl;
	else
        std::cout << "Serialization and deserialization failed." << std::endl;
}