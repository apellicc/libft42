#include "libft.h"

char	*ft_strnew(size_t	size)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *) malloc(sizeof (char *) * size);
	if (!s)
		return(NULL);
	while (size)
	{
		s[i] = '\0';
		i++;
		size--;
	}
	return (s);
}