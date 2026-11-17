/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:44:19 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/12 16:59:14 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	count;
	int	p;

	i = 0;
	count = 1;
	p = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		count *= -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		p *= 10;
		p += str[i] - '0';
		i++;
	}
	return (p * count);
}

// int	main(void)
// {
// 	char	*c = "    -2";

// 	printf("%d", ft_atoi(c));
// }
