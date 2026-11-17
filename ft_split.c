/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 14:19:46 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/15 17:28:41 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	countword(char const *str, char charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && str[i] == charset)
			i++;
		if (str[i] != '\0')
		{
			count++;
			while (str[i] != '\0' && str[i] != charset)
				i++;
		}
	}
	return (count);
}

char	*cpy(char const *str, char *res, int k)
{
	int	i;

	i = 0;
	while (i < k)
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static void	*free_all(char **res, int j)
{
	while (j > 0)
		free(res[--j]);
	free(res);
	return (NULL);
}

char	**fill(char **res, char const *s, char c)
{
	int		i;
	int		j;
	int		start;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && (s[i] == c))
			i++;
		start = i;
		while (s[i] != '\0' && (s[i] != c))
			i++;
		if ((i - start) > 0)
		{
			res[j] = malloc(sizeof(char) * ((i - start) + 1));
			if (!res[j])
				return (free_all(res, j));
			cpy(&s[start], res[j], (i - start));
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;

	res = malloc(sizeof(char *) * (countword(s, c) + 1));
	if (!res)
		return (NULL);
	return (fill(res, s, c));
}

// int main()
// {
// 	char **arr;
// 	const char	*a = "    sjakn--., kajnkn .. kasnfk ,- ank";
// 	const char	s = '.';
// 	arr = ft_split(a, s);
// 	int i = 0;
// 	while (arr[i])
// 	{

// 		printf("%s", arr[i]);

// 		printf("\n");
// 		i++;
// 	}
// }
