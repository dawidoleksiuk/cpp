# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/06 16:44:36 by doleksiu          #+#    #+#              #
#    Updated: 2026/06/27 17:22:10 by doleksiu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = materia
OBJS_DIR = ./objs

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp Manager.cpp MateriaSource.cpp
OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))
INCS =  AMateria.hpp Character.hpp Cure.hpp Ice.hpp Manager.hpp MateriaSource.hpp ICharacter.hpp IMateriaSource.hpp
all: $(NAME)
 
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

clean: 
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
