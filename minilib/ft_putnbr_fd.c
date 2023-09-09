/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:30:42 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/09 17:04:28 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int	ft_putnbr_fd(int n, int fd, int value)
{
	unsigned int	nb;
	char			ch;

	nb = (unsigned int)n;
	if (n < 0)
	{
		nb = nb * -1;
		write (fd, "-", 1);
        value++;
	}
	if (nb <= 9)
	{
		ch = nb + '0';
		write(fd, &ch, 1);
        value++;
	}
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, fd, value);
		ft_putnbr_fd(nb % 10, fd, value);
	}

    return (value);
}

int	ft_put_unsigned_nbr_fd(unsigned int n, int fd, int value)
{
	unsigned int	nb;
	char			ch;

	nb = n;
	if (nb <= 9)
	{
		ch = nb + '0';
		write(fd, &ch, 1);
        value++;
	}
	if (nb > 9)
	{
        ft_put_unsigned_nbr_fd(nb / 10, fd, value);
        ft_put_unsigned_nbr_fd(nb % 10, fd, value);
	}
    return (value);
}
