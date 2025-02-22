/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:19:25 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/26 12:17:59 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		if ((str[e] < 'a' || str[e] > 'z') && (str[e] < 'A' || str[e] > 'Z'))
		{
			return (0);
		}
		e++;
	}
	return (1);
}
//pode criar uma variavel string direto assim: char lj[] = "laid" ou como abaixo
/*
#include <stdio.h>

int	main(void)
{
	char	*lj;
	
	lj = "LaidJessica";

	printf("%d", ft_str_is_alpha(lj));
	return (0);
}*/
