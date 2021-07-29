/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$> */

#include <unistd.h>

int ft_strlen(char *str)
 {
     int i:
 
      i = 0:
     while (str[i])
      {
          i++;
      }
      return (i);
}



void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int     lcase(char c)
 {
    int index;
 
     if (c >= 'a' && c <= 'z')
     {
         index = c - 'a' + 1;
          return (index);
      }
      if  (c >= 'A' && c <= 'Z')
     {
          index = c - 'A' + 1;
          return (index);
      }
      else
          c = 1;
          return (1);
}
 int     main(int argc, char **argv)
  {
      int i;
      int index;
 
     i = 0;
      if (argc != 2)
      {
          write(1, "\n", 1);
      }
      while (argv[1][i])
      {
          index = lcase(argv[1][i]);
          while (index--)
 
              write(1, &argv[1][i], 1);
              i++;
      }
      write(1, "\n", 1);
      return (0);
  }
}