/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 16:26:56 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/09 16:58:56 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/ft_printf.h"

int  ft_base(long unsigned int number, int base_number, char base_array[], int is_uppercase)
{
    char character;
    int value;

    if (number > (long unsigned int)base_number)
    {
        ft_base(number / base_number, base_number, base_array, is_uppercase);
        value = ft_base(number % base_number, base_number, base_array, is_uppercase);
    }
    else {
        character = base_array[number];
        if(!is_uppercase)
            character = (char) ft_tolower(character);
        value = ft_putchar_fd(character, 1);
        return (value);
    }
    return value;
}