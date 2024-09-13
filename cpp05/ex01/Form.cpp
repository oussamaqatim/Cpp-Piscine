/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+: m  */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:51:25 by oussama           #+#    #+#             */
/*   Updated: 2023/05/10 03:09:25 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"


Form::Form():_name(""),_gradeToSign(0),_gradeToExecute(0)
{

}

Form::Form(const std::string& Name, const int gradeToSign, const int gradeToExecute): _name(Name),_gradeToSign(gradeToSign),_gradeToExecute(gradeToExecute)
{
    this->_isSigned = false;
    this->flag = 0;
    
    if (gradeToSign < 1 || gradeToExecute < 1)
    {
        throw GradeTooHighException();
    }
    if (gradeToSign > 150 || gradeToExecute > 150)
    {
        throw GradeTooLowException();
    }
}

Form::Form(const Form& object) : _name(object._name), _gradeToSign(object._gradeToSign), _gradeToExecute(object._gradeToExecute)  
{
    this->_isSigned = object._isSigned;
    *this = object; 
}

Form & Form::operator=(const Form& object)
{
    if (this != &object)
    {
        this->_isSigned = object._isSigned;
    }
    return (*this);
}

const std::string& Form::getName() const
{
    return _name;
}

bool Form::isSigned() const
{
    return _isSigned;
}

int Form::getGradeToSign() const
{
    return _gradeToSign;
}

int Form::getGradeToExecute() const
{
    return _gradeToExecute;
}

void Form::setflag(bool ff)
{
    this->flag = ff;
}
bool Form::getflag() const
{
    return (this->flag);
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
    if (bureaucrat.getGrade() > _gradeToSign)
    {
        throw GradeTooLowException();
    }
    else if (!this->_isSigned)
    {
        std::cout << this->getName() << " Form was signed by " << bureaucrat.getName() << std::endl;
        this->_isSigned = true;
    }
    else
        std::cout << this->getName() << " Form already Signed" << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form: " << form.getName() << ", signed: " << form.isSigned() << ", grade to sign: " << form.getGradeToSign() << ", grade to execute: " << form.getGradeToExecute();
    return os;
}


Form::~Form()
{
    
}
