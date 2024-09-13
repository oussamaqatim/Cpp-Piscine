/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:38:14 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/26 15:59:24 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
}

Span::Span(unsigned int nb) : size(nb)
{    
}

Span::Span(const Span &object)
{
    *this = object;
}

Span &  Span::operator=(const Span &object)
{
    if (this != &object)
    {
        this->size = object.size;
        this->vect = object.vect;
    }
    return *this;
}

void Span::addNumber(int numToAdd)
{
    if (vect.size() == this->size)
        throw "Span est plein";
    vect.push_back(numToAdd);
}

int Span::longestSpan()
{
    if (vect.size() <= 1)
        throw "Span a moins de 2 éléments.";

    int minElement = vect[0];
    int maxElement = vect[0];

    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i] < minElement)
            minElement = vect[i];
    }

    for (size_t i = 0; i < vect.size(); i++)
    {
        if (vect[i] > maxElement)
            maxElement = vect[i];
    }

    return (maxElement - minElement);
}

int Span::shortestSpan()
{
	std::vector<int>::iterator it;
	std::vector<int> tmp = this->vect;
	int result = -1;
	
	if (vect.size() <= 1)
        throw "Span a moins de 2 éléments.";
	std::sort(tmp.begin(), tmp.end());
	for (it = tmp.begin(); it != tmp.end() - 1; it++)
    {
        int diff = *(it + 1) - *it;
        if (result > diff || result < 0)
        {
            result = diff;
        }
	}
	return (result);
}

void Span::addMany(std::vector<int> vec, std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (this->size < vec.size())
		throw "Span est plein";
	
    while (begin != end)
		addNumber(*begin++);
	
}

Span::~Span()
{
    
}