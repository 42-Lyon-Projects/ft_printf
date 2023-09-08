/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:39:32 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/07 18:21:50 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"

 int ft_args_handler(char c, va_list params) {
	if (c == 'c')
		ft_get_char(params);
	else if (c == 's')
        ft_get_string(params);
    else if (c == 'u')
        ft_get_unsigned_integer(params);
	else if (c == 'd' || c == 'i')
        ft_get_integer(params);
	else if (c == 'x' || c == 'X')
		ft_get_base16(c == 'X', params);
    else if (c == 'p')
        ft_get_address(params);
	else if (c == '%')
		ft_putstr_fd("%", 1);
    else
        ft_putchar_fd(c, 1);
}