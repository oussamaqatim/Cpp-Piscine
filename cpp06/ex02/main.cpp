/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:39:57 by oqatim            #+#    #+#             */
/*   Updated: 2023/09/21 16:51:31 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base* generate()
{
    srand(time(0));
    int random = rand() % 3;
	switch (random)
	{
        case 0:
            return new A();
        case 1:
            return new B();
        default:
            return new C();
    }
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
	{
        std::cout << "A" << std::endl;
    }
	else if (dynamic_cast<B*>(p))
	{
        std::cout << "B" << std::endl;
    }
	else if (dynamic_cast<C*>(p))
	{
        std::cout << "C" << std::endl;
    }
	else
	{
        std::cout << "Unknown" << std::endl;
    }
}

void identify(Base& p)
{
	try
	{
		A &a = dynamic_cast<A&>(p);
		(void) a;
		std::cout << "class : A" << std::endl;
	}
	catch(std::exception& e)
	{
		try
		{
			B &b = dynamic_cast<B&>(p);
			(void) b;
			std::cout << "class: B" << std::endl;
		}
		catch(std::exception& e)
		{
			try
			{
				C &c = dynamic_cast<C&>(p);
				(void) c;
				std::cout << "class: C" << std::endl;
			}
			catch(std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
}

int main()
{
    Base* randomObject = generate();

    std::cout << "Using identify(Base*): ";
    identify(randomObject);

    std::cout << "Using identify(Base&): ";
    identify(*randomObject);

    delete randomObject;

    return 0;
}
