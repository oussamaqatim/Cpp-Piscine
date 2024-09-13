/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:22:58 by oussama           #+#    #+#             */
/*   Updated: 2023/08/11 23:23:28 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{   
}

Bureaucrat::Bureaucrat(const std::string& name, int Grade) : name(name)
{
    if (Grade < 1)
        throw GradeTooHighException();
    else if (Grade > 150)
        throw GradeTooLowException();
    else
        grade = Grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &object)
{
    *this = object;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& object)
{
    if (this != &object)
    {
        this->grade = object.grade;
    }
    return (*this);
}
std::string Bureaucrat::getName() const 
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void Bureaucrat::incrementGrade()
{
    if (grade > 1)
        grade--;
    else
        throw GradeTooHighException();
}

void Bureaucrat::decrementGrade()
{
    if (grade < 150)
        grade++;
    else 
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (os);
}


