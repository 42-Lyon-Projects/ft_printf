/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_address.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:21:53 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/08 14:03:48 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_get_address(va_list param, char *base_array)
{
	long unsigned int	number;
    int value;

	number = va_arg(param, long unsigned int);
    value = 2;
	ft_putstr_fd("0x", 1);
    value += ft_base(number, 16, base_array, 0);

    return (value);
}
