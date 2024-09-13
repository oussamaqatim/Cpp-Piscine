# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/11 09:40:39 by oqatim            #+#    #+#              #
#    Updated: 2023/09/21 16:52:38 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Identify

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp Base.cpp

CC = c++

HEADER = A.hpp B.hpp C.hpp Base.hpp

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