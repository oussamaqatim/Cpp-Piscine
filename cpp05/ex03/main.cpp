/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:43:50 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/28 08:26:20 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"


int main()
{
	try
	{
		Bureaucrat Chef("Chef", 1);
		PresidentialPardonForm Conge("Conge");
		AForm *form;
		Intern test;
		
		form = test.makeForm("PresidentialPardonForm", "Oussama");
		Conge.beSigned(Chef);
		Conge.execute(Chef);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;;
	}
}
