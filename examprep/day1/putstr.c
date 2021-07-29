#include <unistd.h>
#include <stdio.h>

 
 void    ft_putstr(char *str)
 {
      while (*str)
     {
         write (1, str, 1);
         str++;
     }
 }

 int main ()
 {
     char f[] = "Helloweorld";
     ft_putstr(f);
 }