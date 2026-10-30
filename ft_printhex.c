/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:28:17 by callwood          #+#    #+#             */
/*   Updated: 2026/10/30 10:40:50 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexcount(unsigned int n, int uppercase)
{
	int		count;
	char	*base;

	count = 0;
	if (uppercase)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		count += ft_hexcount(n / 16, uppercase);
	count += ft_putchar_fd(base[n % 16], 1);
	return (count);
}

int	ft_printhex(va_list args, int uppercase)
{
	unsigned int	n;

	n = va_arg(args, unsigned int);
	return (ft_puthex_count(n, uppercase));
}
