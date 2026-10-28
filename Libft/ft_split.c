/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 13:02:10 by callwood          #+#    #+#             */
/*   Updated: 2026/10/19 13:02:12 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	countwords(char const *s, char c)
{
	size_t	i;
	size_t	cpt;
	int		wc;

	i = 0;
	cpt = 0;
	wc = 0;
	while (s[i])
	{
		if (s[i] != c && wc == 0)
		{
			wc = 1;
			cpt++;
		}
		else if (s[i] == c)
			wc = 0;
		i++;
	}
	return (cpt);
}

size_t	wordlen(char const *s, size_t i, char c)
{
	size_t	cpt;

	cpt = 0;
	while (s[i] && s[i] != c)
	{
		cpt++;
		i++;
	}
	return (cpt);
}

void	*freesplit(char **split, size_t i)
{
	while (i > 0)
	{
		i--;
		free(split[i]);
	}
	free(split);
	return (NULL);
}

static char	**ft_split_loop(char const *s, char c, char **split)
{
	size_t	i;
	size_t	j;
	size_t	wlen;

	i = 0;
	j = 0;
	while (s[i] && split)
	{
		while (s[i] && s[i] == c)
			i++;
		wlen = wordlen(s, i, c);
		if (wlen > 0)
		{
			split[j] = ft_substr(s, i, wlen);
			if (!split[j])
				split = freesplit(split, j);
			else
				j++;
			i += wlen;
		}
	}
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	split = NULL;
	if (s)
	{
		split = ft_calloc(countwords(s, c) + 1, sizeof(char *));
		if (split)
			split = ft_split_loop(s, c, split);
	}
	return (split);
}
