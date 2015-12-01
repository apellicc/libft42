#include "libft.h"

int main(int argc, char **argv)
{
   int i;
   char *trim;

   trim = (char *)malloc(sizeof(char) + 10);
   if (argc == 1)
       trim = ft_strtrim(argv[1]);
   printf("%s\n", trim);
   return (0);
}