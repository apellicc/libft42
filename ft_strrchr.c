#include "libft.h"

char *ft_strchr(char const *s, int c)
{
	int i;

	i = ft_strlen(s);
	if (c == '\0')
		return (s + i);
	while (i != -1)
	{
		if (s[i] == c)
			return (s + i);
		i--;
	}
	
	return (NULL);
}
