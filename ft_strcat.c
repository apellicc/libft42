#include "libft.h"

char	*ft_strcat(char *dest, const char *src)
{
	int i;
	int d;


	i = 0;
	d = ft_strlen(dest);

	while (src[d] != '\0')
	{
		dest[d] = src[i];
		i++;
		d++;
	}
	dest[i] = '\0';
	return(dest);
}