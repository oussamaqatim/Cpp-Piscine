# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/16 08:26:40 by oqatim            #+#    #+#              #
#    Updated: 2023/10/16 08:28:22 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MutantStack

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp 

CC = c++

HEADER = MutantStack.hpp

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