# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyujeong <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/14 09:44:43 by hyujeong          #+#    #+#              #
#    Updated: 2023/09/14 18:39:20 by hyujeong         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
CC = gcc
CFLAGS = -Wall -Wextra -Werror -c
SRCDIR = srcs
TARGET = libft.a
INCDIR = includes
SRCDEC = $(SRCDIR)/ft_putchar.c $(SRCDIR)/ft_swap.c $(SRCDIR)/ft_putstr.c $(SRCDIR)/ft_strlen.c $(SRCDIR)/ft_strcmp.c
OBJECTS = $(SRCDEC:.c=.o)

all : $(TARGET)

%.o : %.c
	$(CC) $(CFLAGS) $< -o $@ -I$(INCDIR)

$(TARGET) : $(OBJECTS)
	ar cr $@ $^

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(TARGET)

re : fclean all
