/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 21:29:27 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/30 15:46:36 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


void print(std::vector<size_t> container)
{
    if (container.size() <= 5)
    {
        for (std::vector<size_t>::iterator it = container.begin(); it != container.end(); it++){
            std::cout << *it << " ";
        }
        std::cout << std::endl;
    }
    else{
        for (std::vector<size_t>::iterator it = container.begin(); it != container.begin() + 5; it++){
            std::cout << *it << " ";
        }
        std::cout << "[...]" << std::endl;
    }
}

void sortInput(int ac, char **av)
{
    check_valid_param(ac, av);
    std::cout << "Before : ";
    if (ac <= 6)
    {
        for(int i = 1; i < ac; i++)
            std::cout << av[i] << " ";
        std::cout << std::endl;
    }
    else
    {
        for(int i = 1; i <= 5; i++)
            std::cout << av[i] << " ";
        std::cout << "[...]" << std::endl;
    }
    
    std::clock_t vstart = std::clock();
    std::vector<size_t> vsort = Pmerge<std::vector<size_t> >(ac, av);
    std::clock_t vend = std::clock();
    std::clock_t dstart = std::clock();
    std::deque<size_t> dsort = Pmerge<std::deque<size_t> >(ac, av);
    std::clock_t dend = std::clock();
    std::cout << "After: ";
    print(vsort);

    double vduration = (double)(vend - vstart) / 1000;
	double dduration = (double)(dend - dstart) / 1000;
	std::cout << "Time to process a range of " << vsort.size() << " elements with std::vector " << vduration << " us " << std::endl;
	std::cout << "Time to process a range of " << dsort.size() << " elements with std::deque " << dduration << " us "  << std::endl;
}

int main(int ac, char **av)
{
    try
    {
        if (ac <= 2)
            throw std::runtime_error("Error: Bad Argument");
        sortInput(ac, av);
    }
    catch(const std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}