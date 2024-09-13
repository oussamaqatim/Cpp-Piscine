/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:22:58 by oussama           #+#    #+#             */
/*   Updated: 2023/08/28 08:19:22 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"


Bureaucrat::Bureaucrat()
{   
}

Bureaucrat::Bureaucrat(const std::string& name, int Grade) : name(name), flag(0)
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

void Bureaucrat::signForm(AForm &object)
{
     if (object.isSigned() == 1 && object.getflag() == 0)
    {
        std::cout << this->name << " signed " << object.getName()  << std::endl;
        object.setflag(1);
    }
    else
    {
        if (this->getGrade() > object.getGradeToSign())
        {
            std::cout << this->name << " couldn't sign " << object.getName() << " because grade is To Low" << std::endl; 
        }
        else if (object.getflag() == 1)
            std::cout << this->name << " couldn't sign " << object.getName() << " because it's Already Signed" << std::endl;
        else
            std::cout << "this Form Not Signed" << std::endl;
                
    }
}

void Bureaucrat::executeForm(const AForm& form)
{
    if(this->grade <= form.getGradeToExecute() && form.isSigned())
        std::cout << this->name << " executed " << form.getName() << std::endl;
    else 
        std::cout << this->name << " can't executed " << form.getName() << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (os);
}


