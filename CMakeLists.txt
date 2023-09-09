cmake_minimum_required(VERSION 3.24)
project(ft_printf C)

set(CMAKE_C_STANDARD 11)

include_directories(headers)
include_directories(libft)
include_directories(printers)

add_executable(ft_printf
        headers/ft_printf.h
        printers/ft_get_char.c
        printers/ft_get_string.c
        ft_args_handler.c
        main.c
        printers/ft_get_integer.c
        printers/ft_get_base16.c
        minilib/ft_base.c
        minilib/ft_putnbr_fd.c
        minilib/ft_putchar_fd.c
        minilib/ft_putstr_fd.c
        minilib/ft_tolower.c
        ft_printf.c printers/ft_get_address.c)
