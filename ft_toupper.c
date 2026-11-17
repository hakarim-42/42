/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:45:42 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/10 18:22:09 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_toupper(int str)
{
	if (str >= 'a' && str <= 'z')
	{
		str -= 32;
	}
	return (str);
}

// int	main(void)
// {
// 	char	te[100] = "avvzzvZZ331";

// 	printf("%s", ft_strupcase(te));
// }
