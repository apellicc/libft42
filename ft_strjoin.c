#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	int a;
	int b;
	char *s3;

	a = 0;
	b = 0;
	s3 = (char *)malloc (sizeof (char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[a] != '\0')
	{
		s3[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		s3[a] = s2[b];
		a++;
		b++;
	}
	s3[a] = '\0';
	return (s3);
}