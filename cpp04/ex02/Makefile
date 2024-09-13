# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 20:38:09 by oqatim            #+#    #+#              #
#    Updated: 2023/04/20 01:23:59 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Animal

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp Animal.cpp Brain.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

CC = c++

HEADER = Animal.hpp Brain.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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