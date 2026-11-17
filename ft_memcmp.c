/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:44:59 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/10 16:37:09 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*sf;
	unsigned char		*ss;

	if (n == 0)
		return (0);
	i = 0;
	sf = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	while (i < n)
	{
		if (sf[i] != ss[i])
			return (sf[i] - ss[i]);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[3] = {1, 3, 2};
// 	char	s2[3] = {1, 3, 4};

// 	printf("%d", ft_memcmp(s1, s2, 4));
// }
