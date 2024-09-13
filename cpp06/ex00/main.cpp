/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:18:16 by oqatim            #+#    #+#             */
/*   Updated: 2023/09/25 17:14:30 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Bad arguments" << std::endl;
        exit(0);
    }
    else
    {
        Convert convertion;
        std::string inp_type = convertion.getType(av[1]);
        convertion.converter(inp_type, av[1]);
    }
    return 0;
}