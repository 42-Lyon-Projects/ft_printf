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

 int handler(char c, va_list params) {
	if (c == 'c')
		get_char(params);
	else if (c == 's')
        get_string(params);
    else if (c == 'u')
        get_unsigned_integer(params);
	else if (c == 'd' || c == 'i')
        get_integer(params);
	else if (c == 'x' || c == 'X')
		get_base16(c == 'X', params);
    else if (c == 'p')
        get_adress(params);
	else if (c == '%')
		ft_putstr_fd("%", 1);
    else
        ft_putchar_fd(c, 1);
}