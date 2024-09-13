# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/09 16:24:04 by oqatim            #+#    #+#              #
#    Updated: 2023/04/07 15:49:12 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Weapon

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = Main.cpp HumanA.cpp HumanB.cpp Weapon.cpp 

CC = c++

HEADER = HumanA.hpp HumanB.hpp Weapon.hpp

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