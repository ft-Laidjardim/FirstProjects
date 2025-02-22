/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 10:43:01 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/26 12:26:39 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		if (str[e] >= 65 && str[e] <= 90)
		{
			str[e] = str[e] +32;
		}
		e++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	lj[] = "ACUCAR, TEMPERO E TUDO QUE HA DE BOM, ZUM!";

	printf("%s", ft_strlowcase(lj));
	return (0);
}*/
