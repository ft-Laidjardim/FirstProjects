/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 08:37:14 by ljessica          #+#    #+#             */
/*   Updated: 2025/02/01 12:21:54 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	is_neg;
	int	result;

	result = 0;
	is_neg = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			is_neg = is_neg * -1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result * is_neg);
}
/*
#include <stdio.h>
int	main()
{
	char l[]= "   ---+--123456a";
	printf("%d", ft_atoi(l));
}*/
