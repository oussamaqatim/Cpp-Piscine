# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/21 17:18:25 by oqatim            #+#    #+#              #
#    Updated: 2023/09/21 17:19:31 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Convert

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Convert.cpp

CC = c++

HEADER = Convert.hpp

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