/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 10:52:48 by callwood          #+#    #+#             */
/*   Updated: 2026/10/21 10:52:50 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*mapi;
	size_t	i;

	len = ft_strlen(s);
	mapi = malloc(sizeof(char) * (len + 1));
	if (!mapi)
		return (NULL);
	i = 0;
	while (i < len)
	{
		mapi[i] = f((unsigned int)i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
