/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:43:50 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/28 08:09:07 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int main()
{

    try
    {
        Bureaucrat alice("Alice", 1);

        
        ShrubberyCreationForm shrubForm("garden");
        RobotomyRequestForm robotForm("target");
        PresidentialPardonForm pardonForm("criminal");

        std::cout << "\033[1;36m" << std::string(40, '*') << "\033[0;m" << std::endl;
        shrubForm.beSigned(alice);
        robotForm.beSigned(alice);
        pardonForm.beSigned(alice);
        std::cout << "\033[1;36m" << std::string(40, '*') << "\033[0;m" << std::endl;
        
        alice.signForm(shrubForm);
        alice.signForm(robotForm);
        alice.signForm(pardonForm);
        std::cout << "\033[1;36m" << std::string(40, '*') << "\033[0;m" << std::endl;

        alice.executeForm(shrubForm);
        alice.executeForm(robotForm);
        alice.executeForm(pardonForm);

        std::cout << "\033[1;36m" << std::string(40, '*') << "\033[0;m" << std::endl;
        shrubForm.execute(alice);
        robotForm.execute(alice);
        pardonForm.execute(alice);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
