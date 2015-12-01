#include <stdio.h>

int		ft_nbword(char const *s, char c)
{
	int i;
	int a;

	a = 0;
	i = 0;
	if (s[0] != c)
		i = 1;
	while (s[a] != '\0')
	{
		if (s[a] == c && s[a + 1] != c && s[a + 1] != '\0')
		{
			i++;
			printf("%d valeur de i dans if\n", i);
		}
		a++;
	}
	printf("%d valeur final de i\n", i);
	return (i);
}


int		ft_lenword(const char *s, char c, size_t i)
{
	while(s[i] != c && s[i] != '\0')
		i++;
	return (i);
}
char	**ft_strsplit(char const *s, char c)
{
	int a;
	int b;
	int i;
	char **str;

	a = 0;
	i = 0;

	str = malloc (sizeof (char *) * (ft_nbword(s, c) + 1));
	if(!str)
		return(NULL);
	while (s[i] != '\0')
	{
	    while(s[i] == c)
			i++;
		if (s[i] != c)
		{
			b = ft_lenword(s, c, i) - i;
			str[a] = ft_strnew(b + 1);
			if(!str[a])
				return(NULL);
			str[a] = ft_strncpy(str[a], (s + i), b);
			i = i + b;
			a++;
		}
		i++
		str[a] = NULL;
	}
	return (str);
}
