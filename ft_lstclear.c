/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/15 14:49:25 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/15 17:57:17 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (lst == NULL || del == NULL)
		return (NULL);
	ptr = *lst;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		ft_lstdelone(*lst, del);
		*lst = ptr;
	}
}
