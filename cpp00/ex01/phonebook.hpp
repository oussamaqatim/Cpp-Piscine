/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 03:23:40 by oqatim            #+#    #+#             */
/*   Updated: 2023/02/24 17:10:56 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
# include <iostream>
#include <iomanip>

class Phonebook
{
    private:
        Contact contacts[8];
    public:
        void add(Contact, int i);
        void display(int index, int r);
        Contact search(int i);
};

#endif