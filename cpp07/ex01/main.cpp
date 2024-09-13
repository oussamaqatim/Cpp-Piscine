/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:59:07 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/02 19:32:18 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

int main()
{
    int intArray[5] = {1, 2, 3, 4, 5};

    std::cout << "Elements du tableau d'entiers : ";
    iter(intArray, 5, printElement<int>);
    std::cout << std::endl;

    double doubleArray[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    std::cout << "Elements du tableau de doubles : ";
    iter(doubleArray, 5, printElement<double>);
    std::cout << std::endl;

    const char* strArray[3] = {"Bonjour", "le", "monde"};

    std::cout << "Elements du tableau de chaînes : ";
    iter(strArray, 3, printElement<const char*>);
    std::cout << std::endl;

    return 0;
}
