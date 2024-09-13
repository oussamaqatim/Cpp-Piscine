/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 17:49:16 by oqatim            #+#    #+#             */
/*   Updated: 2023/04/07 15:25:47 by oqatim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef CLASS_HARL_H
# define CLASS_HARL_H

#include <iostream>

class Harl
{
    public :
        void    complain(std::string level);
    private :
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};

#endif