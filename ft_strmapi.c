#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *s1;

	i = 0;
	s1 = ft_strdup(s);
	if (s != NULL && f != NULL)
	{
		while(s[i])
		{
			s1[i] = (*f)(i, s[i]);
			i++;
		}
	}
	return(s1);
}
