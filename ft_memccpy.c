#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	int i;
	char *tmp;

	i = 0;
	tmp = (char *)src;
	while (n)
	{
		if (tmp[i] == c)
			return (dst = (void *)src + i + 1);
		i++;
		n--;
	}

	return(NULL);
}
