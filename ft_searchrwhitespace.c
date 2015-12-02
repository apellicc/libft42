#include "libft.h"

int		ft_searchrwhitespace(char const *s)
{
	int	i;

	i = ft_strlen(s) - 1;
	while ((s[i] ==' ' || s[i] == '\n'|| s[i] == '\t') && i)
			i--;
	return (i);
}
