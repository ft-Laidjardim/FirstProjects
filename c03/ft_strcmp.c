/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 10:01:39 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/28 15:22:12 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	e;

	e = 0;
	while (s1[e] == s2[e] && (s1[e] != '\0' || s2[e] != '\0'))
	{
		e++;
	}
	return (s1[e] - s2[e]);
}
/*
#include <stdio.h>

int	main(void)
{
	char lj1[] = "Voce e capaz!";
	char lj2[] = "So termona quando acaba. ass MAROCAS.";

	printf("%d", ft_strcmp(lj1, lj2));
	return (0);
}*/
