#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int len;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (argv[1][len])
		len++;
	len--;
	while (len > -1)
	{
		ft_putchar(argv[1][len]);
		len--;
	}
	write(1, "\n" ,1);
	return (0);
}