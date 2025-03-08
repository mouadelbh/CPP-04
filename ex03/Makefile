# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mel-bouh <mel-bouh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/07 19:55:55 by mel-bouh          #+#    #+#              #
#    Updated: 2025/03/08 02:17:57 by mel-bouh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Wextra -Werror #-std=c++98 -pedantic
SRC = AMateria.cpp Cure.cpp Ice.cpp main.cpp Character.cpp List.cpp MateriaSource.cpp
OBJ = $(SRC:.cpp=.o)
HEADER = AMateria.hpp Cure.hpp Ice.hpp ICharacter.hpp Character.hpp List.hpp IMateriaSource.hpp MateriaSource.hpp
NAME = Rpg

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
