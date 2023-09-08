/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:39:32 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/08 16:51:55 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

int	ft_args_handler(char c, va_list params)
{
    char *base_16;
    base_16 = (char [16])
            {
                    '0', '1', '2', '3', '4', '5', '6', '7',
                    '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'
            };
	if (c == 'c')
		ft_get_char(params);
	else if (c == 's')
		ft_get_string(params);
	else if (c == 'u')
		ft_get_unsigned_integer(params);
	else if (c == 'd' || c == 'i')
		ft_get_integer(params);
	else if (c == 'x' || c == 'X')
        ft_get_base16(c == 'X', params, base_16);
	else if (c == 'p')
        ft_get_address(params, base_16);
	else if (c == '%')
		ft_putstr_fd("%", 1);
	else
		ft_putchar_fd(c, 1);

    return (0);
}
