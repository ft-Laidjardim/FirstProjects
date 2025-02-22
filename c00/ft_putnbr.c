#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	long n;
	
	n = nb;
	if(n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	if(n > 9)
	{
		ft_putnbr(n /10);
	}
	ft_putchar(n % 10 + 48);
}
int main()
{
	ft_putnbr(42);
}
