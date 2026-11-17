/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 14:27:52 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/14 15:45:29 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static int	count(int a)
{
	int	c;

	if (a == 0)
		return (1);
	c = 0;
	while (a != 0)
	{
		c++;
		a = a / 10;
	}
	return (c);
}

static void	function(char *p, long nb, int s)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		p[i++] = '-';
		nb = -nb;
	}
	while (s != 0)
	{
		p[i] = nb / s + '0';
		nb = nb % s;
		s = s / 10;
		i++;
	}
	p[i] = '\0';
}

char	*ft_itoa(int n)
{
	int		a;
	long	s;
	char	*p;

	s = 1;
	a = count(n);
	if (n < 0)
		p = malloc(sizeof(char) * (a + 2));
	else
		p = malloc(sizeof(char) * (a + 1));
	if (!p)
		return (NULL);
	while (a > 1)
	{
		s = s * 10;
		a--;
	}
	a = 0;
	function(p, n, s);
	return (p);
}

// int	main(void)
// {
// 	printf("%s", ft_itoa(-1110));
// }
