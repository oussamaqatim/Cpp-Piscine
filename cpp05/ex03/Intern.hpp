/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oussama <oussama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 04:40:54 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/18 18:42:54 by oussama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_INTERN_HPP
# define CLASS_INTERN_HPP

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
    public :
        Intern();
        Intern(const Intern & object);
        Intern & operator=(const Intern & object);
        
        AForm *makeForm(std::string name, std::string target);
        
        ~Intern();
    
};

#endif