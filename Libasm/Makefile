# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abougrin <abougrin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/25 09:43:08 by abougrin          #+#    #+#              #
#    Updated: 2020/12/29 09:20:59 by abougrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = asm

SRCS = ft_strlen.s ft_strcpy.s ft_strcmp.s ft_write.s ft_read.s ft_strdup.s 
SRCC = main.c
OBJ = ft_strlen.o ft_strcpy.o ft_strcmp.o ft_write.o ft_read.o ft_strdup.o main.o

all: $(NAME)

$(NAME): $(SRCS) $(SRCC)
	gcc -Wall -Wextra -Werror -c $(SRCC)
	nasm -fmacho64 ft_strlen.s
	nasm -fmacho64 ft_strcpy.s
	nasm -fmacho64 ft_strcmp.s
	nasm -fmacho64 ft_write.s
	nasm -fmacho64 ft_read.s
	nasm -fmacho64 ft_strdup.s
	gcc -Wall -Wextra -Werror -o $(NAME) $(OBJ)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all