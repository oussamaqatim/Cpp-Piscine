/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 04:52:09 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/09 14:19:02 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private :
        std::string target;
    public :
        RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm & object);
        RobotomyRequestForm &operator=(const RobotomyRequestForm & object);
        RobotomyRequestForm(std::string _target);
        void execute (Bureaucrat const & executor) const;
        ~RobotomyRequestForm();
};

#endif