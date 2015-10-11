#include "libft.h"
void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	else if(n < 9)
	{
		ft_putnbr(n / 10);
		ft_putchar(n % 10);
	}
	else if(n <= 0 && n >= 9)
		ft_putchar(n);
}

int main ()
{
	int i; 

	i = 54354;
	ft_putnbr(i);
	return (0);
}