/*Write a program that displays all digits in descending order, followed by a
newline.

Example:
$> ./ft_countdown | cat -e
9876543210$
$>
*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int i;

	i = 9;
	while (i > -1)
	{
		ft_putchar(i + '0');
		i--;
	}
	write(1, "\n", 1);
	return (0);
}