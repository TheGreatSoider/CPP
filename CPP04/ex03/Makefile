# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/17 23:20:30 by cocheong          #+#    #+#              #
#    Updated: 2023/11/17 23:20:30 by cocheong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= materia
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror
RM			= rm -rf


OBJDIR = .objFiles

FILES		= Amateria Character Cure Ice MateriaSource main

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Amateria.hpp Character.hpp Cure.hpp Ice.hpp MateriaSource.hpp

.PHONY: all clean fclean re bonus norm

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CC) $(OBJ) $(OPTS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp $(HEADER)
	@mkdir -p $(dir $@)
	@$(CC) $(FLAGS) $(OPTS) -c $< -o $@

clean:
	@$(RM) $(OBJDIR) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	
re: fclean all