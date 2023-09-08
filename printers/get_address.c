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


void	ft_get_address(va_list param)
{
    long unsigned int number;
    long unsigned int second_number;
    int index;
    char *result;
    char *base_array;


    number = va_arg(param, long unsigned int);
    second_number = number;
    index = 0;
    result = NULL;
    base_array = (char [16]) {
        '0', '1', '2', '3', '4', '5', '6', '7', '8', '9','A', 'B', 'C', 'D', 'E', 'F'
    };

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
        result[index--] = (char) ft_tolower(base_array[number % 16]);
        number /= 16;
    }
    ft_putstr_fd(result, 1);
}