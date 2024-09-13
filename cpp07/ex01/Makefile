# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 14:59:34 by oqatim            #+#    #+#              #
#    Updated: 2023/10/02 10:42:43 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Iter

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

CC = c++

HEADER = Iter.hpp

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