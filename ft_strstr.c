#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int f;
	int k;

	i = 0;
	f = 0;
	if (s2[f] == '\0')
		return ((char *)s1);
	while (s1[i] != '\0')
	{
		k = i - 1; 
		while (s1[k++] == s2[f])
		{
			f++;
			if (s2[f] == '\0')
				return ((char *)s1 + i);		
		}
		i++;
	}
	return (NULL);
}