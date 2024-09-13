/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 04:51:03 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/09 14:14:08 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm 
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& Tar);
        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm &obj);

        void execute(Bureaucrat const& executor) const;

        ~ShrubberyCreationForm();
};
