/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:30:32 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/09 16:18:04 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	index;

	if (!s)
		return 0;
	index = 0;
	while (s[index] && s[index] != '\0')
	{
		ft_putchar_fd(s[index], fd);
		index++;
	}
    return (index);
}
