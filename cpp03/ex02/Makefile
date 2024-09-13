# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 02:57:10 by oqatim            #+#    #+#              #
#    Updated: 2023/04/14 17:45:07 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fragtrap

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp ClapTrap.cpp FragTrap.cpp

CC = c++

HEADER = ClapTrap.hpp FragTrap.hpp

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