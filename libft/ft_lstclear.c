/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 15:46:36 by callwood          #+#    #+#             */
/*   Updated: 2026/10/21 15:46:38 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*new;

	if (!lst || !del)
		return ;
	new = *lst;
	while (new)
	{
		temp = new->next;
		ft_lstdelone(new, del);
		new = temp;
	}
	*lst = NULL;
}
