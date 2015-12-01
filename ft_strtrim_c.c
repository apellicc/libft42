#include "libft.h"

static int	ft_searchrc(char const *s, char c)
{
	int		i;

	i = ft_strlen(s);
	while (s[i] == c || s[i] == '\0')
		i--;
	return(i);
}


static int	ft_searchc(char const *s, char c)
{
	int		i;

	i = 0;
	while (s[i] == c || s[i] == '\0')
		i++;
	return(i);
}

char		*ft_strtrim_c(char const *s, char c)
{
	char	*s1;
	int		i;
	int		a;
	int		b;

	b = 0;
	i = ft_searchc(s, c);
	a = ft_searchrc(s, c);
	s1 = ft_strnew((a - i) + 1);
	while (i <= a)
	{
		s1[b] = s[i];
		b++;
		i++;
	}
	s1[b] = '\0';
	return(s1);
}