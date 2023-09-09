/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_char.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:47:16 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/09 16:52:32 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_get_char(va_list param)
{
	char	c;

	c = va_arg(param, int);
	ft_putchar_fd(c, 1);

    return (1);
}