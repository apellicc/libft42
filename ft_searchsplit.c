#include "libft.h"

int ft_searchsplit(char const *c)
{
	int i;

	i = 0;
	while (c[i] == ' ')
		i++;
	return(i);
}