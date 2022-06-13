# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abougrin <abougrin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/14 14:25:18 by abougrin          #+#    #+#              #
#    Updated: 2021/07/15 14:10:44 by abougrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = philo

SRC = philosophers.c inital_vals.c activities.c tools.c
OBJ = philosophers.o inital_vals.o activities.o tools.o

all: $(NAME)

$(NAME) : $(SRC)
	@gcc -Wall -Wextra -Werror $(SRC) -c 
	@gcc -Wall -Wextra -Werror $(OBJ) -o $(NAME)
clean: 
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all