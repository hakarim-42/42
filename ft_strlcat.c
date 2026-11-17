/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:45:18 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/15 17:53:14 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_length;
	size_t	dest_length;
	size_t	j;

	dest_length = 0;
	src_length = 0;
	j = 0;
	while (src[src_length] != '\0')
		src_length++;
	while (dest[dest_length] != '\0' && dest_length < size)
		dest_length++;
	if (dest_length == size)
	{
		return (size + src_length);
	}
	while (src[j] != '\0' && dest_length + j < size - 1)
	{
		dest[dest_length + j] = src[j];
		j++;
	}
	dest[dest_length + j] = '\0';
	return (dest_length + src_length);
}

// int	main(void)
// {
// 	char			haystack[] = "hello world adad";
// 	char			needle[] = "";
// 	unsigned int	res;

// 	res = ft_strlcat(haystack, needle, 20);
// 	printf("%d\n", res);
// }
