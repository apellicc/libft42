#include <stdio.h>
#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	printf("\n%s string base\n", s);
	printf("%c supp\n", c);
	int a;
	int b;
	int i;
	int lol;
	char **str;
	lol = 0;
	a = 0;
	i = 0;
	str = (char **)malloc(sizeof(char *) * ft_nbword(s, c) + 1 );
	if(!str)
		return(NULL);
	while (lol < ft_nbword(s, c))
	{
	    while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != c && s[i + 1] != '\0' && s[i] != '\0')
		{	
			b = ft_lenword(s, c, i);
			printf("%d valeur de lenword\n", ft_lenword(s, c, i));
			printf("%d nombre de mots\n", ft_nbword(s, c));
			str[a++] = ft_strsub(s, i, b);
			i = i + b - 1;
			printf("%s mon str[", str[a]);
			printf("%d]\n" ,a );

		}
		i++;
		lol++;
	}
	str[a] = NULL;
	return (str);
}
