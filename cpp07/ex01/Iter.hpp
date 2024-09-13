/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 15:04:51 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/02 20:21:31 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T, typename Func>
void iter(T* arr, size_t length, Func func)
{
    for (size_t i = 0; i < length; ++i)
        func(arr[i]);
}

template <typename T>
void printElement(const T& element)
{
    std::cout << element << " " ;
}

#endif