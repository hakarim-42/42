/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:44:46 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/13 14:33:24 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// #include <stdio.h>

int	ft_isprint(int str)
{
	if (str < 32 || str > 126)
		return (0);
	return (1);
}

// int	main(void)
// {
// 	char	te[100] = "";

// 	printf("%d", ft_str_is_printable(te));
// }
