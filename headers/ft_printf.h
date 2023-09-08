/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:43:12 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/08 16:28:48 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by jbadaire on 3/9/23.
//

#ifndef PRINTF_H
# define PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_args_handler(char c, va_list params);
void	ft_get_char(va_list param);
void	ft_get_string(va_list param);
void	ft_get_integer(va_list param);
void	ft_get_unsigned_integer(va_list param);
void	ft_get_address(va_list param, char *base_array);
void    ft_get_base16(int is_upper, va_list param, char *base);

#endif