/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 22:39:56 by oqatim            #+#    #+#             */
/*   Updated: 2023/02/12 23:05:34 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    Upper_str(int ac, char **av)
{
    int i;
    int j;

    i = 1;
    while(i < ac)
    {
        j = 0;
        while (av[i][j])
        {
            if (av[i][j] >= 97 && av[i][j] <= 122)
                av[i][j] -= 32;
            std::cout << av[i][j] ;
            j++;
        }
        i++;
    }
    std::cout << std::endl;
}

int main (int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
        Upper_str(ac, av);
}