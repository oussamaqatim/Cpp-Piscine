/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 04:52:57 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/09 14:18:19 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        PresidentialPardonForm(std::string tar);
        PresidentialPardonForm(const PresidentialPardonForm & object);
        PresidentialPardonForm &operator=(const PresidentialPardonForm & object);
        
        void execute (Bureaucrat const & executor) const;
        
        ~PresidentialPardonForm();
};

#endif