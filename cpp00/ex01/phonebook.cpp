/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 04:08:27 by oqatim            #+#    #+#             */
/*   Updated: 2023/02/24 23:57:11 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void Phonebook::add(Contact contact, int i)
{

    this->contacts[i] = contact;
}

void     Phonebook:: display(int index, int flag)
{
    int i = 0;

    std ::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std ::endl;
    std ::cout << "│" << std ::setw(10) << "Index";
    std ::cout << "│" << std ::setw(10) << "Fist_Name";
    std ::cout << "│" << std ::setw(10) << "Last_Name";
    std ::cout << "│" <<  std ::setw(10) << "Nick_Name" << "│" << std ::endl;
    std ::cout << "├──────────┼──────────┼──────────┼──────────┤" << std ::endl;
    if (flag != 1)
    {
        while (i < index)
        {
            std ::cout << "│" << std ::setw(10) << i + 1;
            std ::cout << "│" << std ::setw(10) << contacts[i].getfirstname();
            std ::cout << "│" << std ::setw(10) << contacts[i].getlastname();
            std ::cout << "│" << std ::setw(10) << contacts[i].getnickname() << "│" << std ::endl;
            i++;
        }   
    }
    else
    {
        while (i < 8)
        {
            std ::cout << "│" << std ::setw(10) << i + 1;
            std ::cout << "│" << std ::setw(10) << contacts[i].getfirstname();
            std ::cout << "│" << std ::setw(10) << contacts[i].getlastname();
            std ::cout << "│" << std ::setw(10) << contacts[i].getnickname() << "│" << std ::endl;
            i++;
        }
    }
    std ::cout << "└──────────┴──────────┴──────────┴──────────┘" << std ::endl;
}