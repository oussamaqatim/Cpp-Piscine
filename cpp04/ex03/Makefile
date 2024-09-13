# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 20:38:09 by oqatim            #+#    #+#              #
#    Updated: 2023/04/21 15:33:57 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Interface

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp

CC = c++

HEADER = AMateria.hpp Ice.hpp Cure.hpp Character.hpp ICharacter.hpp IMateriaSource.hpp MateriaSource.hpp

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