/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:48:23 by oussama           #+#    #+#             */
/*   Updated: 2023/08/11 23:48:48 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"
// #include "Bureaucrat.hpp"

class Bureaucrat;
 

class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeToSign;
        const int _gradeToExecute;
        bool flag;
    
    public:
        Form();
        Form(const std::string& name, int gradeToSign, int gradeToExecute);
        Form(const Form& object);
        Form &operator=(const Form& object);
    
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
    
        void beSigned(Bureaucrat& bureaucrat);
        ~Form();
};

std::ostream& operator<<(std::ostream& os, const Form& form);

#endif