#include "libft.h"

static size_t	ft_tabstrlen(const char *s, char c, size_t i)
{
	while(s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static int	ft_nbword(const char *s, char c)
{
	int i;
	int a;
	a = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if (s[0] != c)
			a++;

		else if(s[i] == c && s[i + 1] != c)
			a++;
		i++;
	}
	return(a);
}

char	**ft_splitstr(char const *s, char c)
{
		int a;
	int b;
	int i;
	i = 0;
	char **str;
	a = 0;

	str = malloc (sizeof (char *) * ft_nbword(s, c));

	while (s[i] != '\0')
	{
	    while(s[i] == c)
			i++;
		
		if (s[i] != c)
		{
			b = ft_tabstrlen(s, c, i) - i;
			str[a] = malloc(sizeof(char) * (c + 1));
			str[a] = ft_strncpy(str[a], (s + i), b);
			i = i + b;
			a++;
		}
	}
	return (str);
}