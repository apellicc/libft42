#include "libft.h"

int		ft_searchrc(char const *s, char c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] == c || s[i] == '\0')
		i--;
	return (i);
}
