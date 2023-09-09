/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_integer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:18:42 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/09 16:56:59 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_get_integer(va_list param)
{
	int	value;

	value = va_arg(param, int);
	return ft_putnbr_fd(value, 1, 0);
}

int	ft_get_unsigned_integer(va_list param)
{
	unsigned int	value;

	value = va_arg(param, unsigned int);
	return ft_put_unsigned_nbr_fd(value, 1,0);
}
