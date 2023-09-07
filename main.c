/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:10:55 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/07 17:10:55 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/printf.h"
#include "stdlib.h"
#include "stdio.h"
int main() {

    void *test = malloc(sizeof (char) * (10));

    ft_printf("Salut:\n"
              " String 1: %s\n String 2: %s\n String 3: %s \n"
              " Char 1: %c \n"
              " Decimal 1 : %d\n"
              " Entier 1 : %i\n"
              " Hex MAJ: %X\n"
              " HEX min %x\n"
              " Unsigned int %u\n"
              " Pourcent: %%\n"
              " Pointeur: %p", "Hello World", "Test1", "Test2", 't', 42, 2242, 022434204, 022434204, 4294967294, test);

    printf("\n====================\n");

    printf("Salut:\n"
           " String 1: %s\n String 2: %s\n String 3: %s \n"
           " Char 1: %c \n"
           " Decimal 1 : %d\n"
           " Entier 1 : %i\n"
           " Hex MAJ: %X\n"
           " HEX min %x\n"
           " Unsigned int %u\n"
           " Pourcent: %%\n"
           " Pointeur: %p", "Hello World", "Test1", "Test2", 't', 42, 2242, 022434204, 022434204, 4294967294, test);
    return 0;
}
