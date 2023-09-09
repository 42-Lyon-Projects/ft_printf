/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:43:52 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/09 17:07:43 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		index;
    int     return_value;

	index = 0;
    return_value = 0;
	va_start(params, str);
	while (str[index])
	{
		if (str[index] == '%')
            return_value += ft_args_handler(str[index + 1], params);
		else if (str[index - 1] != '%') {
            ft_putchar_fd(str[index], 1);
            return_value++;
        }
        index++;
	}
	va_end(params);
    return (return_value);
}
