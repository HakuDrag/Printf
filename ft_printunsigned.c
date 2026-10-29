/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:42:57 by callwood          #+#    #+#             */
/*   Updated: 2026/10/29 15:43:44 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_unsignedcount(unsigned int n)
{
    int count;

    count = 0;
    if (n >= 10)
        count +=ft_printunsigned(n / 10);
    count += write(1, (n % 10) + '0', 1);
    return (count);
}

int ft_printunsigned(va_list args)
{
    unsigned int n;

    n = va_arg(args, unsigned int);
    return (ft_unsignedcount(n));
}
