/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 08:49:45 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/26 12:24:20 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		if (str[e] > 0 && str[e] < 31)
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
	//	char lj[] = {10, 25, 30};
	char lj[] = "O pernalonga, o patolino, o taz e a lola vem...";
	//	char lj[] = "";

	printf("%d", ft_str_is_printable(lj));	
}*/
