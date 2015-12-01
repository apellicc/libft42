#include "libft.h"

char *ft_strchr(char const *s, int c)
{
	int i;
	char *s1;

	i = 0;
	s1 = (char *)s;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s1 + i);
		i++;
	}
	if (c == '\0')
			return (s1 + i);
	return (NULL);
}