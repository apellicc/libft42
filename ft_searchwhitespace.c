#include "libft.h"

int		ft_searchwhitespace(char const *s)
{
	int	i;

	i = 0;
	while ((s[i] ==' ' || s[i] == '\n'|| s[i] == '\t') && s[i] != '\0')
			i++;
	return (i);
}