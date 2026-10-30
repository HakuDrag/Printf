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

int	ft_printstrlenfd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
	return (i);
}

int	ft_hexcount(unsigned long n)
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
	{
		ft_putstr_fd("(nil)", 1);
		return (5);
	}
	count += ft_printstrlenfd("0x", 1);
	count += ft_hexcount((unsigned long)ptr);
	return (count);
}
