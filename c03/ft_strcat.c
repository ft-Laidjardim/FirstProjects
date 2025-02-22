/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 13:20:57 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/28 15:24:13 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}
	dest[d] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char l[]= "Isso";
	char j[]= "Funciona";

	printf("%s",ft_strcat(l,j));
}*/
