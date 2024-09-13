/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialisation.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:38:25 by oqatim            #+#    #+#             */
/*   Updated: 2023/09/16 17:47:55 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialisation.hpp"

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}