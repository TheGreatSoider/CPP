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

NAME		= Zoo
	
CC			= c++
FLAGS		= -Wall -Wextra -Werror
RM			= rm -rf


OBJDIR = .objFiles

FILES		= main Animal Cat Dog WrongAnimal

SRC			= $(FILES:=.cpp)
OBJ			= $(addprefix $(OBJDIR)/, $(FILES:=.o))
HEADER		= Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp

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