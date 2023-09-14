# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 15:57:13 by hyujeong          #+#    #+#              #
#    Updated: 2023/09/14 19:57:07 by hyujeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS += silent
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = functions.c main.c operators.c
NAME = do-op

all : $(NAME)
	
$(NAME) : $(SRC)
	cc $(CFLAGS) -o $(NAME) $(SRC)

clean:
	rm -f 

fclean: clean
	rm -f $(NAME)

re: fclean all
