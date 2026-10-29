/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:28:17 by callwood          #+#    #+#             */
/*   Updated: 2026/10/28 14:28:20 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrcount(long n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += ft_nbrcount(n / 10);
	c = (n % 10) + '0';
	count += write(1, &c, 1);
	return (count);
}

int	ft_printnbr(va_list args)
{
	long	n;
	int		count;
	
	n = (long)va_arg(args, int);
	count = 0;

	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	count += ft_nbrcount(n);
	return (count);
}