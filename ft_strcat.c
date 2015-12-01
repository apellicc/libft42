#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int i;
	int d;


	i = 0;
	d = ft_strlen(s1);

	while (s2[i] != '\0')
	{
		s1[d] = s2[i];
		i++;
		d++;
	}
	s1[d] = '\0';
	return(s1);
}