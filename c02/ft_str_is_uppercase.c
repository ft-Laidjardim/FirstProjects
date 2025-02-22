/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 08:31:31 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/27 07:21:30 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		if (str[e] < 'A' || str[e] > 'Z')
		{
			return (0);
		}
		e++;
	}
	return (1);
}
/*
#include <stdio.h>
int	main(void)
{
	char lj[] = "Eu sou o mascara";

	printf("%d", ft_str_is_uppercase(lj));
}*/
