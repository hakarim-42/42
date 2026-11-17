/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:45:06 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/15 16:34:33 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*de;
	unsigned const char	*sr;

	if (dest == NULL && src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	de = (unsigned char *)dest;
	sr = (unsigned const char *)src;
	i = 0;
	if (de < sr)
	{
		while (i < n)
		{
			de[i] = sr[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			de[n] = sr[n];
	}
	return (de);
}

// int	main(void)
// {
// 	char	a[20] = "123456789";
// 	char	b[20] = "123456789";
// 	ft_memmove(a + 2, a, 5);
// 	memmove(b + 2, b, 5);
// 	printf("%s %s\n", a, b);

// 	ft_memmove(a, a + 2, 5);
// 	memmove(b, b + 2, 5);
// 	printf("%s %s\n", a, b);
// 	return (0);
// }
