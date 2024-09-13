# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 14:18:59 by oqatim            #+#    #+#              #
#    Updated: 2023/10/16 14:19:47 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = easyfind

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 

CC = c++

HEADER = easyfind.hpp

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