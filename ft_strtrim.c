#include "libft.h"

static int	ft_searchrwhitespace(char const *s)
{
	int		i;

	i = ft_strlen(s) - 1;
	while ((s[i] ==' ' || s[i] == '\n'|| s[i] == '\t') && i)
			i--;
	return(i);
}


static int	ft_searchwhitespace(char const *s)
{
	int		i;

	i = 0;
	while ((s[i] ==' ' || s[i] == '\n'|| s[i] == '\t') && s[i] != '\0')
			i++;
	return(i);
}

char	*ft_strtrim(char const *s)
{
	char *s1;
	int len;
	int rlen;
	int i;

	i = 0;
	
	if(!s)
		return (NULL);
	len =  ft_searchwhitespace(s);
	rlen = ft_searchrwhitespace(s);
	if (rlen == 0)
		return ((char *)&s[len]);
	s1 = (char *)malloc(sizeof(char) * (rlen - len + 1));
	if (!s1)
		return (NULL);
	while (rlen >= len)
	{
		s1[i] = s[len];
		len++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
