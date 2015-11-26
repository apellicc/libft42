#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void *tmp;

	tmp = ft_memalloc(len);
	tmp =  ft_memcpy(tmp, src, len);
	dst = ft_memcpy(dst, tmp, len);
	return (dst)
}
