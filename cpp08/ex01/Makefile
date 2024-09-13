# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 10:38:36 by oqatim            #+#    #+#              #
#    Updated: 2023/10/15 09:38:57 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Span

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Span.cpp

CC = c++

HEADER = Span.hpp

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