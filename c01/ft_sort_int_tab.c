#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	lj;
	int	temp;

	lj = 0;
	while (++lj < size)
	{
		if (tab[lj] < tab[lj - 1])
		{
			temp = tab[lj];
			tab[lj] = tab [lj - 1];
			tab[lj - 1] = temp;
			lj = 0;
		}
	}
}
/*
int main(void)
{
	int rj[] = {5, 2, 7, 9, 1, 3};
	printf("%d %d %d %d %d %d\n", rj[0], rj[1], rj[2], rj[3], rj[4], rj[5]);
	ft_sort_int_tab(rj, 6);
	printf("%d %d %d %d %d %d", rj[0], rj[1], rj[2], rj[3], rj[4], rj[5]);
}*/
