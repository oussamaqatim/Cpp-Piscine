/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 04:51:16 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/28 08:07:59 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& Tar): AForm("ShrubberyCreationForm", 145, 137)
{
    this->target = Tar;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &object)
{
    *this = object;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & object)
{
    if (this != &object)
        this->target = object.target;
    return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const 
{
    if (!isSigned())
        throw FormNotSigned();
    if (executor.getGrade() > getGradeToExecute())
        throw GradeTooLowException();

    std::ofstream outpout_file;
    outpout_file.open(this->target + "_shrubbery");
    if (outpout_file.is_open() && outpout_file.good())
    {
       outpout_file << "       *        " << std::endl
                    << "      ***       " << std::endl
                    << "     *****      " << std::endl
                    << "    *******     " << std::endl
                    << "   *********    " << std::endl
                    << "  ***********   " << std::endl
                    << "       |        " << std::endl
                    << "       |        " << std::endl
                    << "       |        " << std::endl
                    << "       |        " << std::endl
                    << "       |        " << std::endl
                    << "  -----------   " << std::endl;

        outpout_file.close();
    }
    else 
        std::cout << "Error : open file" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}
