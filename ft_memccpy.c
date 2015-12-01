#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)

{
	int i;
	char *s1;
	char *s2;

	s1 = (char *)dst;
	s2 = (char *)src;
	i = 0;
	while (n != 0)
	{
		if(s2[i] == c)
		{
			s1[i] = s2[i];
			i++;
			return(&s1[i]);
		}
		s1[i] = s2[i];
		i++;
		n--;
	}
	return(NULL);
}

