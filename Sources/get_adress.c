/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_adress.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:21:53 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/07 18:21:57 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/printf.h"
#include "stdlib.h"

char base_1_array[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9','A', 'B', 'C', 'D', 'E', 'F'};

void	get_adress(va_list param)
{
    long unsigned int number;
    long unsigned int second_number;
    int index;
    char *result;

    number = va_arg(param, long unsigned int);
    second_number = number;
    index = 0;
    result = NULL;

    while ((second_number /= 16) != 0)
        index++;

    result = (char *) malloc(sizeof (char) * (index + 3));
    if(!result)
        return ;
    index = index + 2;
    result[0] = '0';
    result[1] = 'x';
    result[index] ='\0';

    while(number != 0)
    {
        result[index--] = (char) ft_tolower(base_1_array[number % 16]);
        number /= 16;
    }
    ft_putstr_fd(result, 1);
}