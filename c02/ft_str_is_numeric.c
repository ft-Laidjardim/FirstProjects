/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 19:57:11 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/26 12:19:50 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		if ((str[e] < '0' || str[e] > '9'))
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
	char lj[] = "0123456";

	printf("%d", ft_str_is_numeric(lj));
	return (0);
}*/
