/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 15:07:50 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/15 18:13:56 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*ptr;
	t_list	*rtn;
	t_list	*p;
	void	*d;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	ptr = lst;
	rtn = NULL;
	while (ptr != NULL)
	{
		d = f(ptr->content);
		p = ft_lstnew(d);
		if (p == NULL)
		{
			del(d);
			ft_lstclear(&rtn, del);
			return (NULL);
		}
		ft_lstadd_back(&rtn, p);
		ptr = ptr->next;
	}
	return (rtn);
}
