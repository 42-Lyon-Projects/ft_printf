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

void	ft_get_address(va_list param, char *base_array)
{
	long unsigned int	number;

	number = va_arg(param, long unsigned int);
	ft_putstr_fd("0x", 1);
    ft_base(number, 16, base_array, 0);
}
