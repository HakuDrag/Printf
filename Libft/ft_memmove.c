/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 15:43:21 by callwood          #+#    #+#             */
/*   Updated: 2026/10/15 17:11:37 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	unsigned char		*dest;
	const unsigned char	*src;

	if (!s1 && !s2)
		return (0);
	dest = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	if (dest > src)
	{
		while (n > 0)
		{
			n--;
			dest[n] = src[n];
		}
	}
	else
		ft_memcpy(s1, s2, n);
	return (s1);
}
