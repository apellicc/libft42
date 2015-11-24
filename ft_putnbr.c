#include "libft.h"

void	ft_putnbr(int c)
{
	if(c < 0)
	{
		ft_putchar('-');
		c = -c;
	}
	if(c > 9)
	{
		ft_putnbr(c / 10);
		ft_putnbr(c % 10);
	}
	if(c < 10)
		ft_putchar(c + '0');
}