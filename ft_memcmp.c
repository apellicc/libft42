#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;
	i = 0;

	while ((char *)s1 + (i/4) == (char *)s2 + (i/4) && n)
	{
		n--;
		i++;
	}
	return (1);
}
