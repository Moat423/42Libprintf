# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmeubrin <lmeubrin@student.42berlin.       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 15:55:27 by lmeubrin          #+#    #+#              #
#    Updated: 2024/05/22 17:14:21 by lmeubrin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SHELL = /bin/bash
MAKEFLAGS += --warn-undefined-variables
.ONESHELL:
CC = cc
CFLAGS = -Werror -Wall -Wextra -I.
NAME = libftprintf.a
LIB = ar
LIBFLAGS = -rcs
DEPS = ft_printf.h
MAIN = ft_behaviour_check.c

BUILD_DIR = .

SRC_DIR = .

SRCS = ft_printf.c ft_printf_utils.c

LIBSRC_DIR = ./libft/

LIBDEPS = $(LIBSRC_DIR)libft.h

LIBSRCS = $(LIBSRC_DIR)ft_isascii.c  $(LIBSRC_DIR)ft_memmove.c \
$(LIBSRC_DIR)ft_strlcpy.c  $(LIBSRC_DIR)ft_tolower.c \
$(LIBSRC_DIR)ft_bzero.c    $(LIBSRC_DIR)ft_isdigit.c  $(LIBSRC_DIR)ft_memset.c\
$(LIBSRC_DIR)ft_strlen.c   $(LIBSRC_DIR)ft_toupper.c \
$(LIBSRC_DIR)ft_isalnum.c  $(LIBSRC_DIR)ft_isprint.c  $(LIBSRC_DIR)ft_strchr.c \
$(LIBSRC_DIR)ft_isalpha.c  $(LIBSRC_DIR)ft_memcpy.c   $(LIBSRC_DIR)ft_strlcat.c\
$(LIBSRC_DIR)ft_strrchr.c $(LIBSRC_DIR)ft_strncmp.c \
$(LIBSRC_DIR)ft_memchr.c $(LIBSRC_DIR)ft_memcmp.c $(LIBSRC_DIR)ft_strnstr.c\
$(LIBSRC_DIR)ft_atoi.c $(LIBSRC_DIR)ft_calloc.c $(LIBSRC_DIR)ft_strdup.c \
$(LIBSRC_DIR)ft_substr.c $(LIBSRC_DIR)ft_strjoin.c $(LIBSRC_DIR)ft_striteri.c\
$(LIBSRC_DIR)ft_strmapi.c $(LIBSRC_DIR)ft_putchar_fd.c \
$(LIBSRC_DIR)ft_putstr_fd.c $(LIBSRC_DIR)ft_putendl_fd.c \
$(LIBSRC_DIR)ft_putnbr_fd.c $(LIBSRC_DIR)ft_itoa.c $(LIBSRC_DIR)ft_strtrim.c \
$(LIBSRC_DIR)ft_split.c $(LIBSRC_DIR)ft_lstnew.c $(LIBSRC_DIR)ft_lstadd_front.c\
$(LIBSRC_DIR)ft_lstsize.c $(LIBSRC_DIR)ft_lstlast.c \
$(LIBSRC_DIR)ft_lstadd_back.c $(LIBSRC_DIR)ft_lstdelone.c \
$(LIBSRC_DIR)ft_lstclear.c $(LIBSRC_DIR)ft_lstiter.c $(LIBSRC_DIR)ft_lstmap.c

LIBOBJS = $(LIBSRCS:.c=.o)

OBJS := $(SRCS:.c=.o)

ALLOBJS = $(OBJS) $(LIBOBJS)

BONUS_SRCS =

BONUS_OBJS = $(BONUS_SRCS:%.c=%.o)

$(NAME): $(ALLOBJS)
	$(LIB) $(LIBFLAGS) -o $@ $^

%.o: %.c $(DEPS)
	$(CC) -c $< $(CFLAGS) -o $@

$(LIBSRC_DIR)%.o: $(LIBSRC_DIR)%.c $(LIBDEPS)
	$(CC) -c $< $(CFLAGS) -o $@

$(OBJS): $(SRSC)

all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)
	cd ./libft
	rm -f $(LIBOBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: $(SRCS) $(LIBSRCS)
	$(CC) -o debug.out $(CFLAGS) -g $^ $(SRCS) $(LIBSRCS) $(MAIN) $(LIBDEPS)\

bonus: $(NAME) $(BONUS_OBJS)
	$(LIB) $(LIBFLAGS)  $(NAME) $(BONUS_OBJS)

.PHONY: all, clean, fclean, re, bonus
