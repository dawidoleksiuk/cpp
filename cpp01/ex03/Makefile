# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/30 17:31:44 by doleksiu          #+#    #+#              #
#    Updated: 2026/04/30 18:21:44 by doleksiu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -g -O0 -std=c++98

NAME = weapon
OBJS_DIR = ./objs

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))
INCS = Weapon.hpp HumanA.hpp HumanB.hpp

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
