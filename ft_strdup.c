#include "libft.h"

char		*ft_strdup(char const *s1)
{
	int		i;
	char	*s2;

	i = 0;
	s2 = (char *)malloc(sizeof (char *) * (ft_strlen(s1) + 1));
	if (!s2)
		return (NULL);
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}
