#include "libft.h"

char *ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *s2;
	int i;

	i = 0;
	s2 = (char *) malloc(sizeof (char *) * (len + 1));
	if (!s2)
		return(NULL);
	while (start <= len)
	{
		s2[i] = s[start];
		start++;
		i++;
	}
	s2[start] = '\0';
	return (s2);
}