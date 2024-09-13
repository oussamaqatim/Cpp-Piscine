# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 02:57:10 by oqatim            #+#    #+#              #
#    Updated: 2023/04/14 17:26:19 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Scavtrap

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

CC = c++

HEADER = ClapTrap.hpp ScavTrap.hpp

%.o: %.cpp ${HEADER}
	$(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: ${NAME}

${NAME} : ${OBJ} ${HEADER}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}  

clean:
	rm -rf ${OBJ}
	
fclean: clean
	rm -rf ${NAME}

re : fclean all