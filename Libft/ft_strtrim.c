/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 11:47:29 by callwood          #+#    #+#             */
/*   Updated: 2026/10/19 11:47:32 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isinset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	n;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && isinset(s1[i], set))
		i++;
	n = ft_strlen(s1);
	while (n > i && isinset(s1[n - 1], set))
		n--;
	return (ft_substr(s1, i, n - i));
}
