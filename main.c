#include "libft.h"

int main(int argc, char **argv)
{
   int i;
   char *trim;
   printf("lelele\n"); 
   trim = (char *)malloc(sizeof(char) + 10);
        trim = ft_strtrim("\t\t\n\t\t   ");
   printf("%s\n", trim);
   return (0);
}