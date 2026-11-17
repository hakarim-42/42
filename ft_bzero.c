/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:44:23 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/15 17:02:08 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	i = 0;
	p = (unsigned char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

// int	main(void)
// {
// 	char	arr[7] = "helloo";

// 	ft_bzero(arr, sizeof(arr));
// 	printf("%d, ", arr[0]);
// }
