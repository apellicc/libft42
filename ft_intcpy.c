#include "libft.h"

char		*ft_intcpy(int n, int t, int i)
{
	char	*s;

	s = (char *)malloc(sizeof(char) * (i + 1));
	while (i >= 0)
 	{
 		s[i] = (t % 10) + '0';
 		t = t / 10;
 		i--;
 	}
 	if (n < 0)
 		s[0] = '-';
 	return (s);
}