# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbadaire <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 17:54:42 by jbadaire          #+#    #+#              #
#    Updated: 2023/01/17 17:54:46 by jbadaire         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

N_TEMP = temp.a

NAME = libftprintf.a

SRCS =  ft_printf.c \
		ft_args_handler.c \
		ft_printf.c \
		printers/ft_get_address.c \
		printers/ft_get_base16.c \
		printers/ft_get_char.c \
		printers/ft_get_integer.c \
		printers/ft_get_string.c \
		minilib/ft_base.c \
		minilib/ft_putchar_fd.c \
		minilib/ft_putnbr_fd.c \
		minilib/ft_putstr_fd.c \
		minilib/ft_tolower.c


SURPL_O = 	ft_printf.o \
            ft_args_handler.o \
            ft_printf.o \
            ft_get_address.o \
            ft_get_base16.o \
            ft_get_char.o \
            ft_get_integer.o \
            ft_get_string.o \
            ft_base.c \
            ft_putchar_fd.c \
            ft_putnbr_fd.c \
            ft_putstr_fd.c \
            ft_tolower.c


CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = headers/ft_printf.h

OBJS = $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	rm -rf $(SURPL_O)
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all