/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:44:33 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/09 15:14:09 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_isalpha(int str)
{
	if ((str < 'a' || str > 'z') && (str < 'A' || str > 'Z'))
	{
		return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	char	te[100] = "";

// 	printf("%d", ft_str_is_alpha(te));
// }
