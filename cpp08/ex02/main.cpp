/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 08:26:42 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/16 16:52:17 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "mstack.top ==> "<< mstack.top() << std::endl;
    mstack.pop();
    std::cout << "mstack.size ==> " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    std::cout << "mstack.begin ---------> " << *it << "\n";
    std::cout << "mstack.end ---------> " << *(ite - 1) << "\n";
     
    ++it;
    --it;
    
    std::cout << " ----------- mstack.begin ---------> " << *it << "\n";
    
    while (it != ite)
    {
        std::cout << *it << std::endl;
        it++;
    }
    
    return(0);
}