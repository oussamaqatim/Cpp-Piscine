/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:31:01 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/20 01:20:22 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
	    std::string ideas[100];

    public:
    	Brain();
    	Brain(const Brain &copy);
    	Brain & operator=(const Brain &assign);
		std::string getideas(int i) const;
		void setideas(std::string str);

    	~Brain();

};

#endif