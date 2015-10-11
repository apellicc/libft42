#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
	int i;
	int f;
	int k;

	i = 0;
	f = 0;

	if (s2[f] == '\0')
		return (s1 + i);

	while (s1[i] != '\0')
	{
		k = i; 
		while (s1[k] == s2[f])
		{
			k++;
			f++;
			if (s2[f] == '\0')
				return (s1 + i);
			
		}
		i++;
	}
	
	return (NULL);
}
