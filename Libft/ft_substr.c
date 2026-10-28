/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 10:48:13 by callwood          #+#    #+#             */
/*   Updated: 2026/10/19 10:48:14 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t n)
{
	size_t	s_len;
	char	*subs;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		n = 0;
	else if (n > s_len - start)
		n = s_len - start;
	subs = ft_calloc(n + 1, sizeof(char));
	if (!subs)
		return (NULL);
	if (n > 0)
		ft_memcpy(subs, s + start, n);
	return (subs);
}
