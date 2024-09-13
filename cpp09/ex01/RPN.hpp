/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:58:40 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/30 14:50:17 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class Rpn
{    
    private:
        std::stack<int> stack;
    public:
        Rpn();
        Rpn(const Rpn &object);
        Rpn &operator = (const Rpn &object);

        void validOperation(std::string input);
        void allOperation(char operation);

        ~Rpn();
              
};

#endif