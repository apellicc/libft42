#include "libft.h"

char	*ft_strnew(size_t	size)
{
	char	*s;

	s = (char *) malloc(sizeof (char *) * size);
	if (!s)
		return(NULL);
	ft_bzero((void *)s, size);
	return (s);
}