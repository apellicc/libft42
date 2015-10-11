#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char *c;
	int i;
	int a;
	int b;

	b = 0;
	i = ft_searchsplit(s);
	a = ft_searchrsplit(s);
	c = (char *) malloc(sizeof (char *) * (a - i) + 1);
	while (i <= a)
	{
		c[b] = s[i];
		b++;
		i++;
	}
	c[b] = '\0';
	return(c);
}

