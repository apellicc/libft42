#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*s;
	int		i;
	i = 0;

	s = (void *)malloc(sizeof(void *) * size);
	if (!s)
		return (NULL);
	while (i <= size)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}