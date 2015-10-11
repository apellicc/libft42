#include "libft.h"

char *ft_strdup(char const *s)
{
	int i;
	char *d;

	i = 0;
	d = (char *) malloc(sizeof (char *) * (ft_strlen(s)));
	while (s[i] != '\0')
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}