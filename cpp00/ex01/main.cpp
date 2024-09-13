/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 03:19:54 by oqatim            #+#    #+#             */
/*   Updated: 2023/02/24 23:48:25 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

void getIndex(Phonebook phonebook, int i, int flag)
{
	std::string index;
	while (std::getline(std::cin, index))
	{
		for(size_t j = 0; j < index.size(); j++)
		{
			if (!isdigit(index[j]))
			{
				std::cout << "XXX ------ Invalid index ------ XXX" << std::endl;
				return ;
			}
		}
		if(index == "")
		{
			std::cout << "XXX ------ Invalid index ------ XXX" << std::endl;
			return ;
		}
		int x = 0;
		x = std::stoi(index);
		if (x == 0)
			return ;
		if (x < 0 || x > 8)
		{
			std::cout << "XXX ------ Invalid index ------ XXX" << std::endl;
			return;
		}
		else
		{
			if (flag != 1)
			{
				x--;
				if (x >= i)
				{
					std::cout << "*********> This Contact Index Does't exist <*********** " << std::endl;
					return ;
				}
				Contact cont = phonebook.search(x);
				cont.Display();
				return;
			}
			else
			{
				x--;
				if (x > 9)
				{
					std::cout << "*********> This Contact Index Does't exist <*********** " << std::endl;
					return ;
				}
				Contact cont = phonebook.search(x);
				cont.Display();
				return;	
			}
		}  
	}
}

int ft_check(std::string first_name)
{
	for(size_t j = 0; j < first_name.size(); j++)
	{
		if(first_name[j] == ' ' || first_name[j] == '\t')
			return (1);
	}
	return (0);	
}

void ft_add(Phonebook *phonebook, int *i, int *flag)
{
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_nubmer;
	std::string darkest_secret;
    
	std::cout << "*********> Add First Name: ";	
	getline(std::cin, first_name);
	if(std::cin.eof())
		exit(1);
    while(first_name == "" || ft_check(first_name))
	{
		std::cout << "*********> Please add Your First Name: ";	
		getline(std::cin, first_name);
		if(std::cin.eof())
			exit(1);
	}
	std::cout << "*********> Add Last Name: ";
	getline(std::cin, last_name);
	if(std::cin.eof())
		exit(1);
	while(last_name == "" || ft_check(last_name))
	{
		std::cout << "*********> Please add Your last_name: ";	
		getline(std::cin, last_name);
		if(std::cin.eof())
			exit(1);
	}
	std::cout << "*********> Add Nickname: ";
	getline(std::cin, nickname);
	if(std::cin.eof())
		exit(1);
	while(nickname == "" || ft_check(nickname))
	{
		std::cout << "*********> Please add Your nickname: ";    
        getline(std::cin, nickname);
		if(std::cin.eof())
			exit(1);
	}
	std::cout << "*********> Add Phone Number: ";
	getline(std::cin, phone_nubmer);
	if(std::cin.eof())
		exit(1);
	while(phone_nubmer == "")
	{
		std::cout << "*********> Please add Your phone number: ";    
        getline(std::cin, phone_nubmer);
		if(std::cin.eof())
			exit(1);
	}
	for(size_t j = 0; j < phone_nubmer.size(); j++)
	{
	   while (!isdigit(phone_nubmer[j]))
	   {
			std::cout << "*********> Please enter Number Not Character" << std::endl;
	    	std::cout << "*********> Add Phone Number: ";
			getline(std::cin, phone_nubmer); 
		   	if(std::cin.eof())
				exit(1);
		}
	}  
	std::cout << "*********> Add Darkest Secret: ";
	getline(std::cin, darkest_secret);
	if(std::cin.eof())
		exit(1);
	while(darkest_secret == "")
	{
		std::cout << "*********> Please add Your Darkest Secret: ";    
        getline(std::cin, darkest_secret);
		if(std::cin.eof())
			exit(1);
	}
	Contact contact(first_name, last_name, nickname, phone_nubmer, darkest_secret);
	if (*i == 8)
	{
		*i = 0;
		*flag = 1;
	}
	phonebook->add(contact, *i);
	(*i)++;
}

int main ()
{
	Phonebook phonebook;
 
	std::string command;
	int i;
	int flag;
	
	flag = 0;
	i = 0;
	while (1)
	{
		std::cout << "*********> Enter Your Command(ADD-||-SEARCH-||-EXIT) : ";
		if(!getline(std::cin, command))
		{
			if(std::cin.eof())
				exit(1);
			std::cout << "*********> Enter Your Command(ADD-||-SEARCH-||-EXIT) : ";
		}
		if(std::cin.eof())
			exit(1);
		if (command == "")
		{
			while (command == "")
			{
				std::cout << "*********> Please ==> Enter Your Command(ADD-||-SEARCH-||-EXIT) : ";	
				getline(std::cin, command);
				if(std::cin.eof())
				exit(1);
			}
		}
		else
		{
			if (command == "ADD")
				ft_add(&phonebook, &i, &flag);
			else if (command == "SEARCH")
			{
				std:: string str;
				phonebook.display(i, flag);
				std::cout << "*********> Please Enter Your Index or 0 to exit <*********** " << std::endl;
				getIndex(phonebook, i, flag);
				continue;
			}
			else if (command == "EXIT")
			{
				std::cout << " Good Bye !" << std::endl;
				exit(1);
			}
			else
				std::cout << "XXX ------ Invalid Command ------ XXX" << std::endl;
		}
	}
}