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

int	ft_printformat(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_printchar(args);
	else if (format == 's')
		count += ft_printstr(args);
	else if (format == 'd' || format == 'i')
		count += ft_printnbr(args);
	else if (format == 'p')
		count += ft_printptr(args);
	else if (format == 'u')
		count += ft_printunsigned(args);
	else if (format == 'x')
		count = ft_printhex(args, 0);
	else if (format == 'X')
		count = ft_printhex(args, 1);
	else if (format == '%')
	{
		ft_putchar_fd('%', 1);
		count = 1;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		count;
	va_list	args;

	i = 0;
	count = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (format[++i])
				count += ft_printformat(args, format[i]);
		}
		else
		{
			ft_putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
