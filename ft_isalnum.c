/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakarim <hakarim@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:44:13 by hakarim           #+#    #+#             */
/*   Updated: 2026/11/14 16:10:37 by hakarim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

// #include <stdio.h>

int	ft_isalnum(int str)
{
	return (ft_isalpha(str) == 1 || ft_isdigit(str) == 1);
}

// int	main(void)
// {
// 	char	te[100] = "1239";

// 	printf("%d", ft_str_is_numeric(te));
// }
