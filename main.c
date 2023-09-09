/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:10:55 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/09 14:32:50 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "headers/ft_printf.h"
#include "stdlib.h"
#include "stdio.h"
int main() {

    void *test = malloc(sizeof (char) * (10));

    ft_printf("C1:%c:\n"
              "C: 2%c:\n"
              "C3: %c:\n"
              "C4:%c:\n"
              "C5 %c %c %c:\n"
              "C6 %c %c %c:\n"
              "C7 %c %c %c:\n"
              "C8 %c %c %c:\n"
              "C9 %c %c %c:\n"

              , '0', '0', '0' - 256, '0' + 256, '0', 0, '1', ' ', ' ', ' ', '1', '2', '3', '2', '1', 0, 0, '1', 2);

    printf("\n====================\n");

    printf("C1:%c:\n"
              "C: 2%c:\n"
              "C3: %c:\n"
              "C4:%c:\n"
              "C5 %c %c %c:\n"
              "C6 %c %c %c:\n"
              "C7 %c %c %c:\n"
              "C8 %c %c %c:\n"
              "C9 %c %c %c:\n"

            , '0', '0', '0' - 256, '0' + 256, '0', 0, '1', ' ', ' ', ' ', '1', '2', '3', '2', '1', 0, 0, '1', 2);

    free(test);
    return 0;
}
