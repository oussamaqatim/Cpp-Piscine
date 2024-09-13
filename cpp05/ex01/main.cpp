/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:43:50 by oqatim            #+#    #+#             */
/*   Updated: 2023/08/09 13:08:36 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try
    {
        // Création de bureaucrates & Formulaire
        Bureaucrat alice("Alice", 2);
        Bureaucrat bob("bob", 2);
        
        Form demandeConge("Formulaire de demande de congé", 4, 1);
        Form demandedemission("Formulaire de demande de demission", 6, 6);
        
        // Test de l'affichage des informations des formulaires
        std::cout << "\033[1;36m" << std::string(6, '-') << " Test de l'affichage des informations des formulaires " << std::string(6, '-') << "\033[0;m" << std::endl;
        std::cout << demandeConge << std::endl;
        std::cout << demandedemission << std::endl;
        std::cout << "\033[1;36m" << std::string(40, '*') << "\033[0;m" << std::endl << std::endl;
        
        // Test de la fonction beSigned by alice 
        std::cout << "\033[1;36m" << std::string(6, '-') << "  Test de la fonction beSigned by alice " << std::string(6, '-') << "\033[0;m" << std::endl;
        demandeConge.beSigned(alice);
        demandedemission.beSigned(alice);
        // demandeConge.beSigned(alice);
        // demandedemission.beSigned(alice);
        std::cout << "\033[1;36m" << std::string(40, '*') << "\033[0;m" << std::endl << std::endl;
    
        // Test de la fonction beSigned by bob 
        std::cout << "\033[1;36m" << std::string(6, '-') << " Test de la fonction beSigned by bob " << std::string(6, '-') << "\033[0;m" << std::endl;
        demandeConge.beSigned(bob);
        demandedemission.beSigned(bob);
        // demandeConge.beSigned(bob);
        // demandedemission.beSigned(bob);
        std::cout << "\033[1;36m" << std::string(40, '*') << "\033[0;m" << std::endl << std::endl;

        
        // Test de la fonction signForm by alice
        std::cout << "\033[1;36m" << std::string(6, '-') << " Test de la fonction signForm by alice " << std::string(6, '-') << "\033[0;m" << std::endl;
        alice.signForm(demandeConge);
        alice.signForm(demandedemission);
        std::cout << "\033[1;36m" << std::string(40, '*') << "\033[0;m" << std::endl << std::endl;

        // Test de la fonction signForm by bob 
        std::cout << "\033[1;36m" << std::string(6, '-') << " Test de la fonction signForm by bob " << std::string(6, '-') << "\033[0;m" << std::endl;
        bob.signForm(demandeConge);
        bob.signForm(demandedemission);
        std::cout << "\033[1;36m" << std::string(40, '*') << "\033[0;m" << std::endl << std::endl;
    
    }
    catch (std::exception const& e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
