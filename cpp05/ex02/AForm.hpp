/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:48:23 by oussama           #+#    #+#             */
/*   Updated: 2023/08/26 08:14:40 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
 

class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
        bool flag;
    
    public:
        AForm();
        AForm(const std::string& name, int gradeToSign, int gradeToExecute);
        AForm(const AForm& object);
        AForm &operator=(const AForm& object);
    
        const std::string& getName() const;
        bool isSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void setflag(bool ff);
        bool getflag() const;
        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
        
                {
                    return ("Form grade is too high");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Form grade is too low");
                }
        };
        class FormNotSigned : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Form Not Signed");
                }
        };
    
        void beSigned(Bureaucrat& bureaucrat);
        virtual void execute(Bureaucrat const & executor) const = 0;
        ~AForm();
};

std::ostream& operator<<(std::ostream& os, const AForm& form);

#endif