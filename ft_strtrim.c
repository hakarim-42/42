/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/13 17:14:14 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/13 18:16:21 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
// #include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

static int	checksep(char str, char const *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == str)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	j;
	char	*p;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && checksep(s1[i], set) == 1)
		i++;
	len = ft_strlen(s1);
	while (len > i && checksep(s1[len - 1], set) == 1)
		len--;
	p = malloc(sizeof(char) * len - i + 1);
	if (!p)
		return (NULL);
	j = 0;
	while (j < len - i)
	{
		p[j] = s1[i + j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

// int	main(void)
// {
// 	printf("%s ", ft_strtrim(" hello ", " "));
// 	printf("%s ", ft_strtrim("xxx", "x"));
// 	printf("%s ", ft_strtrim("", "x"));
// 	printf("%s ", ft_strtrim("abc", ""));
// 	printf("%s ", ft_strtrim("xxhixx", "xy"));
// }
