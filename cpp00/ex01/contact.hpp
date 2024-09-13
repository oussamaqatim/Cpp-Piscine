/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 03:42:53 by oqatim            #+#    #+#             */
/*   Updated: 2023/02/25 00:02:27 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
    private:
        std::string firstname;
        std::string lastname;
        std::string nickname;
        std::string phoneNumber;
        std::string darkestSecret;
    public:
        Contact(); //Constructor
    
        Contact(std::string firstname, std::string lastname, std::string nickname, std::string phoneNumber, std::string darkestSecret); //parametrized Constructor
        
        std::string getfirstname() ;
        std::string getlastname();
        std::string getnickname();
        std::string getPhoneNumber();
        std::string getDarkestSecret();
        void Display();
};

#endif