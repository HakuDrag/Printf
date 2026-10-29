/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:14:39 by callwood          #+#    #+#             */
/*   Updated: 2026/10/21 10:47:12 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	nblen(int n)
{
	size_t	cpt;

	cpt = 0;
	if (n <= 0)
		cpt++;
	while (n)
	{
		n = n / 10;
		cpt++;
	}
	return (cpt);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	len;
	char	*itoa;

	len = nblen(n);
	itoa = malloc(sizeof(char) * (len + 1));
	if (!itoa)
		return (NULL);
	nb = n;
	itoa[len] = '\0';
	if (nb == 0)
		itoa[0] = '0';
	if (nb < 0)
	{
		itoa[0] = '-';
		nb = -nb;
	}
	while (nb)
	{
		len--;
		itoa[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (itoa);
}
