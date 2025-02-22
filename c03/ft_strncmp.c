/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 11:24:47 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/30 10:12:30 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	e;

	e = 0;
	while (e < n && (s1[e] != '\0' || s2[e] != '\0' ))
	{
		if (s1[e] != s2[e])
		{
			return (s1[e] - s2[e]);
		}
		e++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char lj1[] = "Voce e capaz!";
	char lj2[] = "Voce e capaz!";

	printf("%d", ft_strncmp(lj1, lj2, 3));
	return (0);
}*/
