#include "libft.h"

int		ft_isalnum(int c)
{
	if((ft_isdigit(c) || ft_isalpha(c)) == 1)
		return(1);
	return(0);
}