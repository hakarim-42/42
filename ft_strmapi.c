/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 15:46:11 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/14 15:57:36 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	c;
	char			*p;

	c = 0;
	while (s[c] != '\0')
		c++;
	p = malloc(sizeof(char) * c + 1);
	if (!p)
		return (NULL);
	c = 0;
	while (s[c] != '\0')
	{
		p[c] = f(c, (char)s[c]);
		c++;
	}
	p[c] = '\0';
	return (p);
}
