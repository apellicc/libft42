#include "libft.h"

int ft_strequ(char const *s1,char const *s2)
{
	int i;
	int d;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	d = s1[i] - s2[i];
	if (d != 0)
		return (0);
	else 
		return(1);
}
