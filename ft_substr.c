/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 16:44:27 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/13 16:57:51 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	l;
	char	*rtn;

	if (!s)
		return (NULL);
	l = 0;
	while (s[l] != '\0')
		l++;
	if (start >= l)
		len = 0;
	else if (len > l - start)
		len = l - start;
	rtn = malloc(sizeof(char) * len + 1);
	if (!rtn)
		return (NULL);
	j = 0;
	while (j < len && s[start] != '\0')
	{
		rtn[j++] = s[start++];
	}
	rtn[j] = '\0';
	return (rtn);
}

// int	main(void)
// {
// 	printf("%s", ft_substr("hello world", 3, 9));
// }
