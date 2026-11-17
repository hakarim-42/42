/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:45:15 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/14 16:37:18 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	int		i;
	char	*cpy;
	int		lensrc;

	i = 0;
	lensrc = 0;
	while (src[lensrc] != '\0')
		lensrc++;
	cpy = malloc(sizeof(char) * (lensrc +1));
	if (cpy == NULL)
		return (0);
	while (src[i] != '\0')
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}

// int	main(void)
// {
// 	char const	c[10] = "hello 42";
// 	char		*f;

// 	f = ft_strdup(c);
// 	printf("%s", f);
// }
