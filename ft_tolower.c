/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:45:40 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/10 18:22:27 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

int	ft_tolower(int str)
{
	if (str >= 'A' && str <= 'Z')
	{
		str += 32;
	}
	return (str);
}

// int	main(void)
// {
// 	char	te[100] = "AAEEfg@3er3";

// 	printf("%s", ft_strupcase(te));
// }
