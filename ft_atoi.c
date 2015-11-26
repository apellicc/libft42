#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int a;

	a = 0;
	i = 1;
	if (str[a] == '-')
	{
		i = -1;
		a++;
	}
	while (str[a] != '\0' && '0'<= str[a] && str[a] <= '9')
	{
		i = i * 10;
		i = i + (str[a] - 48);
		a++;
	}
	return(a * i);
}