/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 01:01:09 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/07 15:40:37 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *ls = newzombie("khobza");
    ls->announce();
    
    randomChump("komira");
    delete(ls);
    return (0);
}