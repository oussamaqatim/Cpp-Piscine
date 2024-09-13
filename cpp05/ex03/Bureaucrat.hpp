/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:22:33 by oussama           #+#    #+#             */
/*   Updated: 2023/08/11 23:31:40 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "AForm.hpp"
#include <iostream>
class AForm;

class Bureaucrat
{
    private:
        int   grade;
        const std::string name;
        bool flag;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name, int grade);
		Bureaucrat(const Bureaucrat &object);
        Bureaucrat& operator=(const Bureaucrat& object);
        
        std::string getName() const;
        int  getGrade() const;
        void incrementGrade();
        void decrementGrade();

        void setflag_b (bool ff);
        bool getflag_b() const;

        
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Bureaucrat grade is too high");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw() 
                {
                    return ("Bureaucrat grade is too low");
                }
        };
        
        void signForm(AForm& form);
        void executeForm(const AForm& form);
		~Bureaucrat();
        
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat);


#endif