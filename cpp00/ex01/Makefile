# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/07 03:19:37 by oqatim            #+#    #+#              #
#    Updated: 2023/02/08 06:05:28 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp phonebook.cpp contact.cpp

CC = c++

HEADER = phonebook.hpp contact.hpp

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