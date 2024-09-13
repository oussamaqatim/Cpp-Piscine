# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 21:29:38 by oqatim            #+#    #+#              #
#    Updated: 2023/10/30 17:07:53 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PmergeMe

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp PmergeMe.cpp

CC = c++

HEADER = PmergeMe.hpp

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