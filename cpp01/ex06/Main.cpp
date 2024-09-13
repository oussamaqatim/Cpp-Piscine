/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:48:53 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/07 15:30:52 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl ptr;
    if (ac != 2)
        std::cout << "Error : Bad arguments" << std::endl;
    else
        ptr.complain(av[1]);
    return (0);
}