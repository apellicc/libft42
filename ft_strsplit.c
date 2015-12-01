#include "libft.h"

static size_t	ft_tabstrlen(const char *s, char c, size_t i)
{
	while(s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static size_t	ft_nbword(const char *s, char c)
{
	size_t i;
	size_t a;
	a = 0;
	i = 0;

	while (s[i] != '\0')
	{
		if(s[i] == c && s[i + 1] !=c)
			a++;	
		i++;
	}
	return(a);
}

char	**ft_strsplit(char const *s, char c)
{
	int a;
	int b;
	int i;
	char **str;
	char *s1;
	a = 0;
	i = -1;
	s1 = ft_strtrim_c(s, c);
	if(!s1)
		return(NULL);
	str = malloc (sizeof (char *) * (ft_nbword(s1, c) + 1));
	if(!str)
		return(NULL);
	while (s1[++i] != '\0')
	{
	    while(s1[++i] == c)
		
		if (s1[i] != c)
		{
			b = ft_tabstrlen(s1, c, i) - i;
			str[a] = ft_strnew(c + 1);
			if(!str[a])
				return(NULL);
;			str[a] = ft_strncpy(str[a], (s1 + i), b);
			i = i + b;
			a++;
		}
		str[a] = NULL;
	}
	return (str);
}