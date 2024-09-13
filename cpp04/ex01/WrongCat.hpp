/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 20:39:37 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/18 22:37:32 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        WrongCat(const WrongCat &object);
        WrongCat &operator= (const WrongCat &object);
        
        std::string getType() const;
        void makeSound() const;
        ~WrongCat();
};

#endif