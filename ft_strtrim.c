#include "libft.h"

static int	ft_searchrwhitespace(char const *c)
{
	int		i;

	i = ft_strlen(c);
	while (c[i] ==' ' || c[i] == '\n'|| c[i] == '\t' || c[i] == '\0')
		i--;
	return(i);
}


static int	ft_searchwhitespace(char const *c)
{
	int		i;

	i = 0;
	while (c[i] ==' ' || c[i] == '\n'|| c[i] == '\t')
		i++;
	return(i);
}

char		*ft_strtrim(char const *s)
{
	char	*c;
	int		i;
	int		a;
	int		b;

	b = 0;
	i = ft_searchwhitespace(s);
	a = ft_searchrwhitespace(s);
	c = ft_strnew((a - i) + 1);
	if(!c)
		return(NULL);
	while (i <= a)
	{
		c[b] = s[i];
		b++;
		i++;
	}
	c[b] = '\0';
	return(c);
}