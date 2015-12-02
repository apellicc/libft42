#include "libft.h"

int		ft_lenword(const char *s, char c, int i)
{
	int	a;
	
	a = i;
	while(s[a] != c && s[a] != '\0')
		a++;
	return (a - i);
}