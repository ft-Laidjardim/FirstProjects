/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 11:37:42 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/26 12:15:16 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)

{
	int	e;

	e = 0;
	while (src[e] != '\0')
	{
		dest[e] = src[e];
		e++;
	}
	dest[e] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str1[] = {"Meus parabens vc chegou ate aqui!"};
	char	str2[50];

	ft_strcpy(str2, str1);
	printf("%s\n", str2);
}*/
