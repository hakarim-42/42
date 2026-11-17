/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 17:12:38 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/14 17:15:12 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		c;
	t_list	*ptr;

	ptr = lst;
	c = 0;
	while (ptr != NULL)
	{
		c++;
		ptr = ptr->next;
	}
	return (c);
}
