#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size -1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

int	main(void)
{
	int	l[] = {5, 1, 3, 2, 4, 8};
	ft_rev_int_tab(l, 6);
	printf("%d %d %d %d %d %d", l[0], l[1], l[2], l[3], l[4], l[5]);
	return 0;
}
