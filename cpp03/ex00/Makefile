# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/13 02:57:10 by oqatim            #+#    #+#              #
#    Updated: 2023/04/14 15:02:09 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = claptrap

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp ClapTrap.cpp

CC = c++

HEADER = ClapTrap.hpp

%.o: %.cpp
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