#include "libft.h"

void	ft_putnbr_fd(int c, int fd)
{
	if(c < 0)
	{
		ft_putchar_fd('-', fd);
		c = -c;
	}
	if(c > 9)
	{
		ft_putnbr_fd(c / 10, fd);
		ft_putnbr_fd(c % 10, fd);
	}
	if(c < 10)
		ft_putchar_fd(c + '0', fd);
}