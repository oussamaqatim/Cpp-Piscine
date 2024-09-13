# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 16:38:34 by oqatim            #+#    #+#              #
#    Updated: 2023/04/07 15:51:09 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Harl

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = Main.cpp Harl.cpp

CC = c++

HEADER = Harl.hpp

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