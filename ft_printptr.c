/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 15:03:52 by callwood          #+#    #+#             */
/*   Updated: 2026/10/30 10:42:04 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexcount(unsigned long n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
		count += ft_hexcount(n / 16);
	count += write(1, &hex[n % 16], 1);
	return (count);
}

int	ft_printptr(va_list args)
{
	void	*ptr;
	int		count;

	ptr = va_arg(args, void *);
	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	ft_putstr_fd("0x", 1);
	count += 2;
	count += ft_hexcount((unsigned long)ptr);
	return (count);
}
