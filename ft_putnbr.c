#include "libft.h"

void				ft_putnbr(int c)
{
	unsigned int	nb;

	nb = c;
	if(c < 0)
	{
		ft_putchar('-');
		nb = -c;
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if(nb < 10)
		ft_putchar(nb + '0');
}