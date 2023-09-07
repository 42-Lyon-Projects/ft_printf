/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_base16.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:10:35 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/07 18:10:35 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/printf.h"
#include "stdlib.h"

char base_16_array[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9','A', 'B', 'C', 'D', 'E', 'F'};

void	get_base16(int is_upper, va_list param)
{
    unsigned int number;
    unsigned int second_number;
    int index;
    char *result;

    number = va_arg(param, unsigned int);
    second_number = number;
    index = 0;
    result = NULL;

    if(number == 0) {
        ft_putchar_fd('0', 1);
        return;
    }

    while ((second_number /= 16) != 0)
        index++;

    result = (char *) malloc(sizeof (char) * (index + 1));
    if(!result)
        return ;

    result[index] ='\0';
    while(number != 0)
    {
        if(!is_upper)
           result[index--] = (char) ft_tolower(base_16_array[number % 16]);
        else
            result[index--] = base_16_array[number % 16];
        number /= 16;
    }
    ft_putstr_fd(result, 1);
}