/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 03:43:02 by oqatim            #+#    #+#             */
/*   Updated: 2023/02/25 00:07:06 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

Contact::Contact(){
}

Contact Phonebook::search(int i)
{
    return contacts[i];    
}

void    Contact::Display()
{
    std::cout << "First Name: " << this->firstname << std::endl;
    std::cout << "Last Name: " << this->lastname << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
}

Contact::Contact(std::string firstname, std::string lastname, std::string nickname, std::string phoneNumber, std::string darkestSecret): phoneNumber(phoneNumber), darkestSecret(darkestSecret) 
{
        if(firstname.size() > 10)
            this->firstname = firstname.substr(0,9).append(".");
        else
            this->firstname = firstname;
        if(lastname.size() > 10)
            this->lastname = lastname.substr(0,9).append(".");
        else
            this->lastname = lastname;
        if(nickname.size() > 10)
            this->nickname = nickname.substr(0,9).append(".");
        else
            this->nickname = nickname;
}

std::string Contact::getfirstname()
{
    return (this->firstname);
}
std::string Contact::getlastname()
{
    return (this->lastname);
}
std::string Contact::getnickname()
{
    return (this->nickname);
}
std::string Contact::getPhoneNumber()
{
    return (this->phoneNumber);
}
std::string Contact::getDarkestSecret()
{
    return (this->darkestSecret);
}