/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:30:42 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/12 14:49:52 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nb;
	char			ch;
	int				value;

	value = 0;
	nb = (unsigned int)n;
	if (n < 0)
	{
		nb = nb * -1;
		value += write (fd, "-", 1);
	}
	if (nb <= 9)
	{
		ch = nb + '0';
		value += write(fd, &ch, 1);
	}
	if (nb > 9)
	{
		value += ft_putnbr_fd(nb / 10, fd);
		value += ft_putnbr_fd(nb % 10, fd);
	}
	return (value);
}

int	ft_put_unsigned_nbr_fd(unsigned int n, int fd)
{
	unsigned int	nb;
	char			ch;
	int				value;

	nb = n;
	ch = 0;
	value = 0;
	if (nb <= 9)
	{
		ch = nb + '0';
		value = write(fd, &ch, 1);
	}
	if (nb > 9)
	{
		value = 0;
		value += ft_put_unsigned_nbr_fd(nb / 10, fd);
		value += ft_put_unsigned_nbr_fd(nb % 10, fd);
	}
	return (value);
}
