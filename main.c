#include "libft.h"

int main(int argc, char *argv[])
{
	char **tabstr = ft_splitstr(argv[1], argv[2][0]);
	int i = 0;
	while (tabstr[i])
		printf("%s\n", tabstr[i++]);
	return (0);
}