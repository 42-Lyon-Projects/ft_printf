# ************************************************************************** #
#                                                                            #
#                                                        :::      ::::::::   #
#        Makefile                                      :+:      :+:    :+:   #
#                                                    +:+ +:+         +:+     #
#   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        #
#                                                +#+#+#+#+#+   +#+           #
#   Created: 2023/09/07 18:18:42 by jbadaire          #+#    #+#             #
#   Updated: 2023/09/08 13:26:38 by jbadaire         ###   ########.fr       #
#                                                                            #
# ************************************************************************** #


#COLOR
_GREEN = \033[92m
_YELLOW = \033[33m
_RED = \033[31m

#POLICE
_END = \033[0m
_BOLD = \033[1m

OS = $(shell uname | cat)

NAME = printf.a
CFLAGS = -Wall -Wextra -Werror
RM = @rm -rf
CC = @gcc
DIR = @mkdir -p
PRINT = @echo
HEADER = ./headers/ft_printf.h
LIBFT = libft/libft.a
MAKE_LIBFT = @make -C libft
CLEAN_LIBFT = @make clean -C libft
FCLEAN_LIBFT = @make fclean -C libft
FILES = ft_printf main args_handler ./printers/get_address ./printers/get_base16 ./printers/get_char ./printers/get_integer ./printers/get_string
SRCS = $(addsuffix .c, $(FILES)))
OBJS = $(addsuffix .o, $(addprefix objects/, $(FILES)))

$(NAME): $(OBJS)
ifeq ($(OS),Linux)
	$(PRINT) "\n${_YELLOW}Checking Libft...${_END}"
	$(MAKE_LIBFT)
	$(PRINT) "\n${_YELLOW}Making $(NAME)...${_END}"
	$(CC) $(OBJS) -o $(NAME) $(LIBFT)
	$(PRINT) "${_BOLD}${_GREEN}$(NAME) done.\a${_END}"
else
	$(PRINT) "This $(NAME) was made for Linux only.\a\n"
endif

objects/%.o: ./%.c Makefile $(HEADER)
ifeq ($(OS),Linux)
	$(DIR) objects
	$(PRINT) "Compiling ${_BOLD}$<$(_END)..."
	$(CC) -c $(CFLAGS) $< -o $@
else
	$(PRINT) "OS=$(OS)" > .OS
endif

all: $(NAME)

clean:
	$(CLEAN_LIBFT)
	$(PRINT) "\n${_BOLD}Cleaning Objects...${_END}"
	$(RM) .OS
	$(RM) $(OBJS)
	$(PRINT) "${_BOLD}${_GREEN}Objects cleaned.\a${_END}"

fclean:
	$(FCLEAN_LIBFT)
	$(PRINT) "\n${_BOLD}Cleaning Objects...${_END}"
	$(RM) $(OBJS)
	$(PRINT) "${_RED}Deleting $(NAME)...${_END}"
	$(RM) $(NAME)
	$(PRINT) "${_RED}Deleting Objects directory...${_END}"
	$(RM) Objects
	$(RM) .OS
	$(PRINT) "${_GREEN}Objects cleaned.${_END}"
	$(PRINT) "${_GREEN}Objects directory deleted.${_END}"
	$(PRINT) "${_GREEN}$(NAME) deleted.\a\n${_END}"

re: fclean all

.PHONY: all clean fclean re
