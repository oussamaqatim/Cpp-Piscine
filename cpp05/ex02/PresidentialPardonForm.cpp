/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 06:43:24 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/28 06:59:33 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm",25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : AForm("PresidentialPardonForm", 25, 5), target(_target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj)
{
    *this = obj;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & obj)
{
    if (this != &obj)
    {
        this->target = obj.target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (!isSigned())
        throw FormNotSigned();
    if (executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}