/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 09:38:18 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/26 15:52:41 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
		std::vector<int>	vect;
		unsigned int		size;
	public:
		Span();
		Span(unsigned int nb);
		Span(const Span &object);
		Span & operator = (const Span &Input);

		void			addNumber(int numToAdd);
		int				longestSpan();
		int				shortestSpan();
		void			addMany(std::vector<int> vec, std::vector<int>::iterator begin, std::vector<int>::iterator end);
		
		~Span();
};


#endif