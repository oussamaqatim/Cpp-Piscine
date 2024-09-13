/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 04:40:41 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/28 07:10:41 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &object)
{
    *this = object;
}

Intern & Intern::operator=(const Intern & object)
{
    if (this != &object)
        *this = object;
    return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
    int i = 0;
    std::string Form[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    
    while (i < 3)
    {
        if(Form[i] == name)
            break;
        i++;
    }
            
    switch (i)
    {
        case 0:
            std::cout << "Intern creates ==> " << Form[i] << std::endl;
            return (new PresidentialPardonForm(target));
        case 1:
            std::cout << "Intern creates ==> " << Form[i] << std::endl;
            return (new RobotomyRequestForm(target));
        case 2:
            std::cout << "Intern creates ==> " << Form[i] << std::endl;
            return (new ShrubberyCreationForm(target));
        default:
            
            throw (AForm::GradeTooHighException());
            break;
    }
}

Intern::~Intern()
{
}
