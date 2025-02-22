/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 14:29:22 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/28 15:35:07 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				d;
	unsigned int	s;

	d = 0;
	s = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0' && s < nb)
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
	char l[20]= "Isso";
	char j[20]= "Funciona";

	printf("%s",ft_strncat(l,j,8));
}*/
