/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljessica <ljessica@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 17:45:03 by ljessica          #+#    #+#             */
/*   Updated: 2025/02/01 12:02:09 by ljessica         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long long	copy_nb;

	copy_nb = nb;
	if (copy_nb < 0)
	{
		ft_putchar('-');
		copy_nb = copy_nb * -1;
	}
	if (copy_nb > 9)
	{
		ft_putnbr(copy_nb / 10);
	}
	ft_putchar(copy_nb % 10 + '0');
}
/*
int	main(void)
{
	int i;
	i = -2147483648;
	ft_putnbr(i);
}*/
