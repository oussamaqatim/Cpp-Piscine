# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/12 22:39:20 by oqatim            #+#    #+#              #
#    Updated: 2023/02/12 22:40:44 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = megaphone.cpp 

CC = c++

%.o: %.cpp
	$(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: ${NAME}

${NAME} : ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${NAME}  

clean:
	rm -rf ${OBJ}
	
fclean: clean
	rm -rf ${NAME}

re : fclean all