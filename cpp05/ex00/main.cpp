/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:43:50 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/08 11:52:03 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"



int main()
{
    try {
        Bureaucrat bureaucrat("John Doe", 2);
        std::cout << bureaucrat << std::endl;


        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        // bureaucrat.decrementGrade();
        // std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        bureaucrat.incrementGrade();
        std::cout << bureaucrat << std::endl;

        // bureaucrat.decrementGrade();
        // std::cout << bureaucrat << std::endl;

    }
    catch (const std::exception& e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
