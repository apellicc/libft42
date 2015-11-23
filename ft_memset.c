#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *s;
	int i;
	i = 0;

	s = b;
	while(len)
	{
		s[i] = c;
		i++;
		len--;
	}
	return(b);
}