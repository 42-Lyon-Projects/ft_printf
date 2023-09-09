/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_base16.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:10:35 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/08 14:18:00 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_get_base16(int is_upper, va_list param, char *base)
{
	long unsigned int	number;

	number = va_arg(param, long unsigned int);
    return (ft_base(number, 16, base, is_upper));
}

