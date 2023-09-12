/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_address.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:21:53 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/12 14:49:48 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_address_base(size_t number, int b_number, char b_array[], int value)
{
	char	character;

	value = 0;
	if (number >= (size_t)b_number)
	{
		value += ft_base(number / b_number, b_number, b_array, value);
		value += ft_base(number % b_number, b_number, b_array, value);
	}
	else
	{
		character = b_array[number];
		value += ft_putchar_fd(character, 1);
		return (value);
	}
	return (value);
}

int	ft_get_address(va_list param, char *base_array)
{
	size_t	number;
	int		value;

	number = va_arg(param, size_t);
	value = 0;
	if (number == 0)
		return (ft_putstr_fd("(nil)", 1));
	value += ft_putstr_fd("0x", 1);
	value += ft_address_base(number, 16, base_array, 0);
	return (value);
}
