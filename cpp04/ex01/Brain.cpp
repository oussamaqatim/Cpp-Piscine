/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:31:04 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/20 02:25:25 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default Constructor -- Brain -- called " << std::endl;
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Copy Constructor called " << std::endl;
	*this  = copy;
}

Brain & Brain::operator=(const Brain &assign)
{
	if (this != &assign)
	{
		for (int i = 0; i < 100; i++)
		{
			ideas[i] = assign.ideas[i];
		}
	}
	return *this;
}

std::string Brain::getideas(int i) const
{
    return (this->ideas[i]);
}

void Brain::setideas(std::string str)
{
    for(int index = 0; index < 100; index++)
	{
		this->ideas[index] = str;	
	}
}

Brain::~Brain()
{
	std::cout << "Destructor ******** Brain ******** called !" << std::endl;
}

