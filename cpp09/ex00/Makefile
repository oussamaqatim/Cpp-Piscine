# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/19 17:06:22 by oqatim            #+#    #+#              #
#    Updated: 2023/10/19 17:06:24 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = btc

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp BitcoinExchange.cpp

CC = c++

HEADER = BitcoinExchange.hpp

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