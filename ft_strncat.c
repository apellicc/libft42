#include "libft.h"

char *ft_strncat(char *dest, const char *src, size_t n)
{
	int i;
	int d;
	char *c;

	c = dest;
	i = -1;
	d = 0;
	dest = (char *)malloc (sizeof (char *) * (ft_strlen(c) + ft_strlen(src) - 1));
	while (c[++i] != '\0')
	{
		dest[i] = c[i];
	}
	while (src[d] != '\0' && d < n)
	{
		dest[i] = src[d];
		i++;
		d++;
	}
	dest[i] = '\0';
	return(dest);
}