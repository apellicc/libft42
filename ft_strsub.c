#include "libft.h"
char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *t;
	int i;

	i = 0;
	t = (char *) malloc(sizeof (char *) * len);
	while (start < len)
	{
		t[i] = s[start];
		start++;
		i++;
	}
	t[start] = '\0';
	return (t);
}