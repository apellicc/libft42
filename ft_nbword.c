#include "libft.h"

int		ft_nbword(char const *s, char c)
{
	int	i;
	int	a;

	a = 0;
	i = 0;
	if (s[0] != c)
		i = 1;
	while (s[a] != '\0')
	{
		if (s[a] == c && s[a + 1] != c && s[a + 1] != '\0' && s[a] !='\0')
		{
			a++;
			i++;
		}
		a++;
	}
	return (i);
}