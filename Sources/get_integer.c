/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_integer.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:18:42 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/07 18:18:42 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/printf.h"

void	get_integer(va_list param)
{
    int value;

    value = va_arg(param, int);
    ft_putnbr_fd(value, 1);
}

void    get_unsigned_integer(va_list param)
{
    unsigned int value;

    value = va_arg(param, unsigned int);
    ft_put_unsigned_nbr_fd(value, 1);
}