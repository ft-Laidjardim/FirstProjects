#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	div;
	int	mod;

	div = 10;
	mod = 3;
	ft_ultimate_div_mod(&div, &mod);
	printf("resultado de a: %d\nResultado de b:%d", div, mod);
}*/
