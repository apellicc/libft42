#include "libft.h"

int ft_searchrsplit(char const *c)
{
	int i;

	i = ft_strlen(c);
	while (c[i] ==' ' || c[i] == '\0')
		i--;
	return(i);
}