# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 18:23:11 by oqatim            #+#    #+#              #
#    Updated: 2023/04/07 15:40:14 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Zombie

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = Main.cpp Zombie.cpp NewZombie.cpp RandomChump.cpp

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