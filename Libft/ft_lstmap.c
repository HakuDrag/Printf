/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: callwood <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 16:06:39 by callwood          #+#    #+#             */
/*   Updated: 2026/10/21 16:06:42 by callwood         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	void	*new;
	t_list	*newlst;
	t_list	*temp;

	if (!lst || !f || !del)
		return (0);
	newlst = 0;
	while (lst)
	{
		new = f(lst->content);
		temp = ft_lstnew(new);
		if (!temp)
		{
			del(new);
			ft_lstclear(&newlst, del);
			return (0);
		}
		ft_lstadd_back(&newlst, temp);
		lst = lst->next;
	}
	return (newlst);
}
