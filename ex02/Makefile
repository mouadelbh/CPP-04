# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/21 03:38:00 by mel-bouh          #+#    #+#              #
#    Updated: 2025/03/07 19:31:04 by mel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror #-std=c++98 -pedantic
SRC = main.cpp Cat.cpp Dog.cpp AAnimal.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = Cat.hpp Dog.hpp AAnimal.hpp Brain.hpp
NAME = AbstractAnimal

all: $(NAME)

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)
$(OBJ): $(SRC)
	c++ $(FLAGS) -c $(SRC)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean re
