/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:15:37 by callwood          #+#    #+#             */
/*   Updated: 2026/10/19 10:26:26 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;
	size_t	totallen;

	if (n != 0 && size > ((size_t)-1) / n)
		return (NULL);
	totallen = n * size;
	if (totallen == 0)
	{
		totallen = 1;
		n = 1;
		size = 1;
	}
	ptr = malloc(totallen);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totallen);
	return (ptr);
}
