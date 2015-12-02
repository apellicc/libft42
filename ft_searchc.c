#include "libft.h"

int		ft_searchc(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] == c || s[i] == '\0')
		i++;
	return (i);
}
