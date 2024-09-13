/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 04:51:35 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/27 00:48:16 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm",72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string tar) : AForm("RobotomyRequestForm",72, 45)
{
    this->target = tar;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & object)
{
    *this = object;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & object)
{
    if (this != &object)
    {
        this->target = object.target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (!isSigned())
        throw FormNotSigned();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    std::srand(0);
    if (std::rand() % 2 == 0)
        std::cout << this->target << " has been successfully robotomized!" << std::endl;
    else
        std::cout << this->target << " Operation failed. Please try again later." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}