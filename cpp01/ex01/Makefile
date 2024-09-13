# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 18:23:19 by oqatim            #+#    #+#              #
#    Updated: 2023/04/07 15:47:35 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = Main.cpp ZombieHorde.cpp Zombie.cpp

CC = c++

HEADER = Zombie.hpp

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