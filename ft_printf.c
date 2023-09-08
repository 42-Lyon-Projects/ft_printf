/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:43:52 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/08 16:51:38 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	params;
	int		index;

	index = 0;
	va_start(params, str);
	while (str[index])
	{
		if (str[index] == '%')
			ft_args_handler(str[index + 1], params);
		else if (str[index - 1] != '%')
			ft_putchar_fd(str[index], 1);
		index++;
	}
	va_end(params);
    return (0);
}
