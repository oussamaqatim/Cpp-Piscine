/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:29:55 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/30 17:57:33 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <chrono>
#include <string>
#include <vector>
#include <deque>


void check_valid_param(int ac, char **av);


template <typename T>
T Pmerge(int ac, char **av)
{
    bool imp = false;
    int key;
    T  vec;
    if (ac % 2)
    {
        for(int i = 1; i < ac ; i++)
        {
            std::string str = (std::string) av[i];
            vec.push_back(std::atoi(str.c_str()));
        }
    }
    else
    {
        for(int i = 1; i < ac - 1; i++)
        {
            std::string str = (std::string) av[i];
            vec.push_back(std::atoi(str.c_str()));
        }
        key = std::atoi(av[ac - 1]);
        imp = true;
    }
    
    T  main_chain;
    for (size_t i = 0; i < vec.size(); i += 2)
    {
        int first = vec[i];
        int second = vec[i + 1];
        if (first < second)
          std::swap(first, second);
        main_chain.push_back(first);
        main_chain.push_back(second);
    }

    for (size_t i = 2; i < main_chain.size(); i += 2)
    {
       int j = i - 2;
       while (j >= 0 && main_chain[j + 2] < main_chain[j])
       {
           std::swap(main_chain[j + 2], main_chain[j]);
           std::swap(main_chain[j + 3], main_chain[j + 1]);
           j -= 2;
       }
    }
    
    T pend;
    for (size_t i = 1; i < main_chain.size(); i++)
    {
        pend.push_back(main_chain[i]);
        main_chain.erase(main_chain.begin() + i);
    }

    T main_chain2;
    main_chain2.push_back(pend.front());
    for(size_t i = 0; i < main_chain.size(); i++)
    {
        main_chain2.push_back(main_chain[i]);
    }
    
    main_chain.erase(main_chain.begin(), main_chain.end());

    size_t a = 0, b = 1, c;

    c = a * 2 + b;
    for (size_t i = 0; c < pend.size(); i++)
    {

        a = b;
        b = c;
        c = 2 * a + b;
        if (c > pend.size())
        {
            c = pend.size();
        }
        for (size_t j = c; j > b; j--)
            main_chain2.insert( std::lower_bound(main_chain2.begin(), main_chain2.end(), pend[j - 1]), pend[j - 1]);
    }

    if(imp == true)
        main_chain2.insert( std::lower_bound(main_chain2.begin(), main_chain2.end(), key), key);
    return (main_chain2);
}

#endif