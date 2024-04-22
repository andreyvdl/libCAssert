# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adantas- <adantas-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/19 16:57:03 by adantas-          #+#    #+#              #
#    Updated: 2024/04/22 16:42:35 by adantas-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libcassert.a
SRCS=$(notdir $(wildcard source/*.c))
INCLUDE=include/libassert.h
OBJS=$(addprefix objects/, $(SRCS:.c=.o))
CFLAGS=-Wall -Wextra -Werror -std=c99 -Iinclude
VPATH=source:objects

all: $(NAME)
.PHONY: all

$(NAME): dir $(OBJS)
	ar rcs $(NAME) $(OBJS)

dir:
	mkdir -p objects
.PHONY: dir

objects/%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c $< -o $@

fclean: clean
	rm -f $(NAME)
.PHONY: fclean

clean:
	rm -f $(OBJS)
.PHONY: clean

re: fclean all
.PHONY: re

