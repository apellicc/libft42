#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *s1;

	i = 0;
	s1 = ft_strdup(s);
	if (s != NULL && f != NULL)
	{
		while(s[i])
		{
			s1[i] = (*f)(s[i]);
			i++;
		}
	}
	return(s1);
}
