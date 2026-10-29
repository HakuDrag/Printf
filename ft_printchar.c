/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printchar.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:19:56 by callwood          #+#    #+#             */
/*   Updated: 2026/10/28 14:19:58 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printchar(va_list args)
{
	unsigned char	c;

	c = (char)va_arg(args, int);
	return (write(1, &c, 1));
}

int	ft_printstr(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	if (!s)
		s = "(null)";
	ft_putstr_fd(s, 1);
	return (ft_strlen(s));
}
