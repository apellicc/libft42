#include "libft.h"

char *ft_strncpy(char *dst, const char *src, size_t len)
{
	int i;

	i = 0;
	while (len && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		len--;
	}
	while(dst[i] != '\0')
	{
		dst[i] = '\0';
		i++;
	}
	return(dst);
}