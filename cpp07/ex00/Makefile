# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/01 13:40:29 by oqatim            #+#    #+#              #
#    Updated: 2023/10/01 13:45:21 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Template

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

CC = c++

HEADER = Whatever.hpp

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