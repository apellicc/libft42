#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int a;
	int b;

	a = 0;
	i = 1;
	b = 0;
	while (str[a] == ' ' || str[a] == '\n' || str[a] == '\v' || str[a] == '\t' || str[a] == '\r' || str[a] == '\f')
		a++;
	if (str[a] == '-')
	{
		i = -1;
		a++;
	}
	else if (str[a] == '+')
		a++;
	while ('0'<= str[a] && str[a] <= '9')
	{
		b = b * 10;
		b = b + (str[a] - '0');
		a++;
	}
	return (b * i);
}
