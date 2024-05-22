# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 15:55:27 by lmeubrin          #+#    #+#              #
#    Updated: 2024/05/22 12:06:29 by lmeubrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/bash
MAKEFLAGS += --warn-undefined-variables
.ONESHELL:
CC = cc
CFLAGS = -Werror -Wall -Wextra -I.
NAME = libftprintf.a
LIB = ar
LIBFLAGS = -L./libft -lft
DEPS = ft_printf.h

BUILD_DIR = .
SRC_DIR = .

SRCS = ft_printf.c ft_printf_utils.c

OBJS := $(SRCS:%.c=%.o)

BONUS_SRCS =

BONUS_OBJS = $(BONUS_SRCS:%.c=%.o)

OBJS_ALL = $(OBJS) $(BONUS_OBJS)

$(NAME): $(OBJS)
	cd ./libft
	$(MAKE)
	cd ../
	$(LIB) $(LIBFLAGS) -o $@ $^

%.o: %.c $(DEPS)
	$(CC) -c $< $(CFLAGS) -o $@

$(OBJS): $(SRSC)

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME) $(BONUS_OBJS)
	$(LIB) $(LIBFLAGS)  $(NAME) $(BONUS_OBJS)

.PHONY: all, clean, fclean, re, bonus
