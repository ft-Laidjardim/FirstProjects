/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/01 14:54:14 by ljessica          #+#    #+#             */
/*   Updated: 2025/02/02 11:34:43 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		num = num * nb;
		nb--;
	}
	return (num);
}
/*
#include <stdio.h>

int	main()
{
printf("%d", ft_iterative_factorial(5));
}*/
