/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:49:08 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/07 15:14:57 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::complain(std::string level)
{
    void (Harl::*funcPtr[4])() = 
    {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if(levels[i] == level)
        {
            (this->*funcPtr[i])();
            break;
        }
        i++;
    }    
}

void    Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void    Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

