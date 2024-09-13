# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/08 14:47:17 by oqatim            #+#    #+#              #
#    Updated: 2023/04/13 05:31:33 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Fixed

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp Fixed.cpp

CC = c++

HEADER = Fixed.hpp

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