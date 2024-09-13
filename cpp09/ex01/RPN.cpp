/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:40:05 by oqatim            #+#    #+#             */
/*   Updated: 2023/10/30 14:54:22 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn()
{
}

Rpn::Rpn(const Rpn &object)
{
    *this = object;
}

Rpn &Rpn::operator = (const Rpn &object)
{
    if (this != &object)
        this->stack = object.stack;
    return (*this);
}


void checkChar(char str)
{
    if (!isdigit(str) && str != '*' && str != '+' && str != '-' && str != '/')
        throw std::runtime_error("Error: Invalid character");
}

int division(int first, int second)
{
    int result;
    
    if (second == 0)
        throw std::runtime_error("Error: Attempted division by zero.");
    result = first / second;
    return (result);
}

void Rpn::allOperation(char operation)
{
    int first;
    int second;
    int result;

    if (stack.size() >= 2)
    {
        second = stack.top();
        stack.pop();
        first = stack.top();
        stack.pop();
        if (operation == '+')
            result = first + second;
        else if (operation == '-')
            result = first - second;
        else if (operation == '*')
            result = first * second;
        else
            result = division(first, second);
    }
    stack.push(result);
}

void Rpn::validOperation(std::string input)
{
    for (int i = 0; input[i]; i++)
    {
        if(input[i] != ' ')
        {
            checkChar(input[i]);
            if (input[i] == '+')
                allOperation('+');
            else if (input[i] == '-')
                allOperation('-');
            else if (input[i] == '*')
                allOperation('*');                
            else if (input[i] == '/')
                allOperation('/');
            else
                stack.push(input[i] - 48);
        }
    }
    if (stack.size() > 1)
        throw std::runtime_error("Error: Invalid Input");
    std::cout << stack.top() << std::endl;
}

Rpn::~Rpn()
{
}