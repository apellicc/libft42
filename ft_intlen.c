#include "libft.h"

int		ft_intlen(int n)
{
	int	i;
	
	i = 0;
	while (n > 10)
 	{
 		n = n / 10;
 		i++;
 	}
 	return (i);
}