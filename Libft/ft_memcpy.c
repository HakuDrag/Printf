/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <callwood@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 14:09:48 by callwood          #+#    #+#             */
/*   Updated: 2026/10/27 10:39:43 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*dst;
	const unsigned char	*src;

	if (!s1 && !s2)
		return (NULL);
	dst = (unsigned char *)s1;
	src = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		i++;
	}
	return (s1);
}
