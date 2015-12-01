#include "libft.h"

int ft_strnequ(char const *s1,char const *s2, size_t n)
{
	size_t i;
	int d;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n)
		i++;
	if (i == n)
		i--;
	d = s1[i] - s2[i];
	if (d != 0)
		return (0);
	else 
		return(1);
}