/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:45:02 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/10 17:00:16 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*de;
	unsigned char	*sr;

	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		de[i] = sr[i];
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	int	s1[3];
	// char	s2[3] = "abc";
	// int		s3[3] = {1,2,3};
	// memcpy(s1, s3, sizeof(s3));
	// for (int i = 0; i < 3; i++)
	// {
	// 	printf("%d", s1[i]);
	// }
	// printf("%s", s1);
// }
