/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:24:57 by ljessica          #+#    #+#             */
/*   Updated: 2025/01/28 17:00:19 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	cstr;
	int	cto_find;

	cstr = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[cstr] != '\0')
	{
		cto_find = 0;
		while (str[cstr + cto_find]
			== to_find[cto_find] && to_find[cto_find] != '\0')
		{
			cto_find++;
		}
		if (to_find[cto_find] == '\0')
		{
			return (&str[cstr]);
		}
		cstr++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char str[]= "eu consigo fazer isso";
	char to_find[]= "consigo";

	printf("%s", ft_strstr(str, to_find));
	return (0);
}*/
