#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	guarde;

	guarde = *a;
	*a = *b;
	*b = guarde;
}
/*
#include <stdio.h>

int	 main (){
	
	int l;
	
	int j;
	
	l = 53;
	j = 38;
	printf("valor antes:%d, %d\n", l , j);
	ft_swap(&l,&j);
	printf("valor depois:%d, %d\n", l, j);
	return (0);
}*/
