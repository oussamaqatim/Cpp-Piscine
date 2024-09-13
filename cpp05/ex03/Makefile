# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/03 11:43:44 by oqatim            #+#    #+#              #
#    Updated: 2023/08/27 01:00:33 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

FLAGS = -Wall -Wextra -Werror -std=c++98 

SRC = main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp PresidentialPardonForm.cpp RobotomyRequestForm.cpp Intern.cpp

CC = c++

HEADER = Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp Intern.hpp

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