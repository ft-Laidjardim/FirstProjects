/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 20:01:27 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/28 10:56:14 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	e;

	e = 0;
	while (e != n && src[e] != '\0')
	{
		dest[e] = src[e];
		e++;
	}
	while (e < n)
	{
		dest[e] = '\0';
		e++;
	}
	return (dest);
}
/*
#include <unistd.h>
#include <stdio.h>

int	main(void)
{	
	char	str1[] = "I told a my Laid plans";
	char	str2[10];

	ft_strncpy(str2, str1, 6);
	printf("%s\n", str2);
}*/
