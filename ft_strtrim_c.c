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

char	*ft_strtrim_c(char const *s, char c)
{
	char *s1;
	int len;
	int rlen;
	int i;

	i = 0;
	
	if(!s)
		return (NULL);
	len =  ft_searchc(s, c);
	rlen = ft_searchrc(s, c);
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