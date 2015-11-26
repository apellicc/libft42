#include "libft.h"

int main(int argc, char **argv)
{
   int i;
   char **split;

   if (argc == 2)
       split = ft_splitstr(argv[1], ' ');
   i = 0;
   while (split[i])
   {
       ft_putstr(split[i]);
    ft_putchar('\n');
       i++;
   }
   return (0);
}