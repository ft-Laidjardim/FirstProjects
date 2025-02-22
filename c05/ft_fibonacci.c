/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 17:39:14 by ljessica          #+#    #+#             */
/*   Updated: 2025/02/02 12:35:18 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return ((ft_fibonacci(index -1)) + (ft_fibonacci(index -2)));
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_fibonacci(-1));
}*/
