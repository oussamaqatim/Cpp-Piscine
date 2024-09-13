# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/30 13:47:57 by oqatim            #+#    #+#              #
#    Updated: 2023/10/30 13:48:17 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = RPN

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp RPN.cpp

CC = c++

HEADER = RPN.hpp

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