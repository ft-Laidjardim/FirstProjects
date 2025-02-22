#include <stdio.h>

int	ft_strlen(char *str)
{
	int	cont;

	cont = 0;
	while (*str != '\0')
	{
		cont++;
		str++;
	}
	return (cont);
}
/*
int	main(void)
{
	printf("%d", ft_strlen("Sou sua fa sua linda!"));
}*/
