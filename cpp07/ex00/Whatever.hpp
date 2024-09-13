/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 13:41:46 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/01 13:58:42 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> 
void swap(T &a, T &b)
{
    T s = a;
    a = b;
    b = s;
}

template <typename T> 
T min(T a, T b)
{
    if (a >= b)
        return b;
    else
        return a;
}

template <typename T>
T max(T a, T b)
{
    if (a > b)
        return a;
    else
        return b;
}

#endif