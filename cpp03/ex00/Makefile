# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: doleksiu <doleksiu@student.42warsaw.pl>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/05/06 16:44:36 by doleksiu          #+#    #+#              #
#    Updated: 2026/05/20 18:40:44 by doleksiu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -g -O0 -std=c++98

NAME = fixed
OBJS_DIR = ./objs

SRCS = main.cpp ClapTrap.cpp
OBJS = $(addprefix $(OBJS_DIR)/,$(SRCS:.cpp=.o))
INCS = ClapTrap.hpp

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
