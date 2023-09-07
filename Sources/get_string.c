/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_string.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:47:16 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/07 11:43:12 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/printf.h"

void	get_string(va_list param)
{
    char *string;

    string = va_arg(param, char *);
    ft_putstr_fd(string, 1);

}