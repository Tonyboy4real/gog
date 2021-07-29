
#include <stdio.h>
    char *ft_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	i = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return(dest);
}
int main ()
{
    char f[]= "Hellowworld";
    char q[12];
    ft_strcpy(q,f);
    printf("%s\n" ,q );

}