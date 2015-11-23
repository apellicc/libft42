#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;

	s = (void *)malloc(size);
	if (!s)
		return (NULL);
	ft_bzero(s, size);
	return (s);
}