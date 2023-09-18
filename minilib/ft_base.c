/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:26:56 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/18 08:54:33 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_base(unsigned long number, int base_number, char base_array[], int value)
{
	char	character;

	value = 0;
	if (number >= (unsigned long)base_number)
	{
		value += ft_base(number / base_number, base_number, base_array, value);
		value += ft_base(number % base_number, base_number, base_array, value);
	}
	else
	{
		character = base_array[number];
		value += ft_putchar_fd(character, 1);
		return (value);
	}
	return (value);
}
