#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (n)
	{
		if ((char *)src[i] == c)
			return (dst = src + i + 1);
		i++;
		n--;
	}

	return(NULL);
}
