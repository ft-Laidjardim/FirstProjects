/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 07:20:23 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/26 12:21:20 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		if (str[e] < 'a' || str[e] > 'z')
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
	char lj[] = "1111";

	printf("%d", ft_str_is_lowercase(lj));
	return (0);
}*/
