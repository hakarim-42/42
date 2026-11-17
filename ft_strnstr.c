/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:45:35 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/13 16:54:27 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// #include <stdio.h>
#include <stddef.h>

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		j = 0;
		while (to_find[j] != '\0' && (i + j) < len && str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	const char	*haystack = "hello world adad";
// 	char	*needle = "wor";

// 	char	*result = ft_strnstr(haystack, needle, 7);

// 	if (result != NULL)
// 	{
// 		printf("Found: %s\n", result);
// 	}
// 	else
// 	{
// 		printf("Not found\n");
// 	}
// }
