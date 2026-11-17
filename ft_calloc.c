/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:44:26 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/17 09:50:41 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
#include <stdint.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t			total;
	size_t			i;

	if (size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	total = size * nmemb;
	p = malloc(total);
	if (!p)
		return (NULL);
	i = 0;
	while (i < total)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}

// int	main(void)
// {
// 	int *p = ft_calloc(5, sizeof(int));

// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d, ", p[i]);
// 	}
// }
