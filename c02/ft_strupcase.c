/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/26 09:42:53 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/26 12:25:43 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	e;

	e = 0;
	while (str[e] != '\0')
	{
		if (str[e] >= 'a' && str[e] <= 'z')
		{
			str[e] = str[e] -32;
		}
		e++;
	}
	return (str);
}
/*
#include <stdio.h>

int main(void)
{
	char	lj[] = "eu sou o batman"; 
	
	printf("%s", ft_strupcase(lj));
	return (0);
}*/
