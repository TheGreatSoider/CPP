# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cocheong <cocheong@student.42kl.my>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/24 09:42:28 by cocheong          #+#    #+#              #
#    Updated: 2023/10/24 09:42:28 by cocheong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME):
		@printf "Compiling $(NAME)\n"
		@ $(CC) $(FLAGS) Megaphone.cpp -o $(NAME)

clean: 
		@ $(RM) $(NAME)

fclean: 
		@ $(RM) $(NAME)

re: fclean all
