/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:44:42 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/09 15:16:01 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_isdigit(int str)
{
	if ((str < '0' || str > '9'))
	{
		return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	te[100] = "1239";

// 	printf("%d", ft_str_is_numeric(te));
// }
