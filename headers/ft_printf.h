/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:43:12 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/09 16:56:34 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by jbadaire on 3/9/23.
//

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_args_handler(char c, va_list params);
int 	ft_get_char(va_list param);
int 	ft_get_string(va_list param);
int 	ft_get_integer(va_list param);
int 	ft_get_unsigned_integer(va_list param);
int 	ft_get_address(va_list param, char *base_array);
int     ft_get_base16(int is_upper, va_list param, char *base);

int 	ft_putnbr_fd(int n, int fd, int value);
int 	ft_put_unsigned_nbr_fd(unsigned int n, int fd, int value);
int 	ft_putchar_fd(char c, int fd);
int 	ft_putstr_fd(char *s, int fd);
int     ft_base(long unsigned int number, int base_number, char base_array[], int is_uppercase);

int	ft_tolower(int c);

#endif
