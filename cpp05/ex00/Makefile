# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oussama <oussama@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:43:44 by oqatim            #+#    #+#              #
#    Updated: 2023/05/04 15:27:50 by oussama          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp Bureaucrat.cpp

CC = c++

HEADER = Bureaucrat.hpp

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