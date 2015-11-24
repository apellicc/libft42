#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	void *s2;
	size_t i;

	i = 0;
	str = (unsigned char *)s;
	while (i <= n)
	{
		if(str[i] == c)
		{
			s2 = str + i;
			return (s2);
		}	
	i++;
	}
	return(NULL);
}