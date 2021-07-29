/*
Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$
*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main ( int argc , char **argv)
{
    int i;
    i = 0;
    if ( argc < 2 )
    {
        ft_putchar('\n');
        return(0);
    }
    while ( argv[1][i])
        {
            ft_putchar(argv[1][i]);
            i++;
        }
    ft_putchar('\n');

}