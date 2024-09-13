# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oqatim <oqatim@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/16 17:46:10 by oqatim            #+#    #+#              #
#    Updated: 2023/09/16 17:47:43 by oqatim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialize

CC = c++

FLAGS = -Wall -Werror -Wextra -std=c++98

SRC = Serialisation.cpp main.cpp

HEADER = Serialisation.hpp

%.o : %.cpp $(HEADER)
	 $(CC) $(FLAGS) -c -o $@ $<

OBJ = $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f Serialize

re: fclean all