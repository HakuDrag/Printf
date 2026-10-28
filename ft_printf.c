/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 13:54:24 by callwood          #+#    #+#             */
/*   Updated: 2026/10/28 13:54:28 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *format, ...)
{
    int     i;
    va_list args;

    i = 0;
    va_start(args, format);
    while (format[i])
    {
        if (format[i] == '%')
        {
            if (format[++i] == 'c')
            {
                i++;
                ft_printchar(args);            }
        }
        else
            write(1, &format[i], 1);
        
    }
    
}