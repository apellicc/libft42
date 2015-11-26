#include "libft.h"
#include <stdio.h>

static int	ft_intlen(int n)
{
	int i;
	i= 0;
	while (n > 10)
 	{
 		n = n / 10;
 		i++;
 	}
 	return (i);
}

static char *ft_str(int n, int t, int i)
{
	char *s;

	s = malloc(sizeof(char) * (i + 1));
	while (i >= 0)
 	{
 		s[i] = (n % 10) + '0';
 		n = n / 10;
 		i--;
 	}
 	if(t < 0)
 		s[0] = '-';
 	return (s);
}
char	*ft_itoa(int 	n)
{
	char	*s;
	int 	t;
	int 	i;

 	i = 0;
 	t = n;
 	if (n < 0)
 	{
 		n = n * -1;
 		i++;
 	}
 	i = ft_intlen(n) + i;
 	s = ft_str(n, t, i);
 	
 	return s;
}