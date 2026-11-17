/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/14 16:41:36 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/14 16:47:23 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	function(int t, int nb, int s, int fd)
{
	while (s != 0)
	{
		if (nb < 0)
		{
			write(fd, "-", 1);
			nb = nb * (-1);
		}
		t = nb / s;
		t = t + '0';
		write(fd, &t, 1);
		nb = nb % s;
		s = s / 10 ;
	}
}

int	count(int a)
{
	int	c;

	c = 0;
	while (a != 0)
	{
		c++;
		a = a / 10;
	}
	return (c);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	a;
	int	s;
	int	t;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	t = 0;
	s = 1;
	a = count(n);
	while (a > 1)
	{
		s = s * 10;
		a--;
	}
	function(t, n, s, fd);
}
