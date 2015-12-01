#include <stdio.h>
#include "libft.h"
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
		if (s[a] == c && s[a + 1] != c)
			i++;
		a++;
	}
	printf("%d valeur final de i\n", i);
	return (i);
}


int		ft_lenword(const char *s, char c, int i)
{
	while (s[i] != c && s[i + 1] != '\0')
		i++;
	return (i);
}
char	**ft_strsplit(char const *s, char c)
{
	printf("\n%s string base\n", s);
	printf("%c a supp\n", c);
	int a;
	int b;
	int i;
	char **str;

	a = 0;
	i = 0;
	str = (char **)malloc(sizeof(char *) * (ft_nbword(s, c) + 1));
	if(!str)
		return(NULL);
	while (s[i] != '\0')
	{
	    while(s[i] == c)
			i++;
		if (s[i] != c)
		{
			b = ft_lenword(s, c, i) - i ;
			printf("%d lenword\n", b);
			str[a] = ft_strnew(b + 1 );
			if(!str[a])
				return(NULL);
			str[a] = ft_strncpy(str[a], (s + i), b);
			i = i + b;
			printf("%smon str[a]\n", str[a]);
			printf("%d mot numero\n" ,a );
			a++;

		}
		i++;
		str[a] = NULL;
	}

	return (str);
}
