/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbadaire <jbadaire@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 11:43:12 by jbadaire          #+#    #+#             */
/*   Updated: 2023/09/07 18:14:57 by jbadaire         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
// Created by jbadaire on 3/9/23.
//

#ifndef FT_PRINTF_PRINTF_H
#define FT_PRINTF_PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include "../libft/libft.h"

int         ft_printf(const char *str, ...);
void	    get_char(va_list param);
void	    get_string(va_list param);
void        get_integer(va_list param);
void        get_unsigned_integer(va_list param);
void        get_adress(va_list param);

void		get_base16(int is_upper, va_list param);

int  handler(char c, va_list params);


#endif //FT_PRINTF_PRINTF_H