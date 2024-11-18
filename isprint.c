#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*int main(int ac, char **av)
{
	if(ft_isprint(**av))
		printf("Il parametro inserito è un printable");
}*/
