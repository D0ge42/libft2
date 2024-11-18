#include <stdio.h>

int ft_isalnum(int c)
{
	return ((c >= 'a' && c <= 'z') 
			|| (c >= 'A' && c <= 'Z') 
			|| (c >= 48 && c <= 57)); 
}
/*int main(int ac, char **av)
{
	if(ft_isalnum(*av[1]))
		printf("Il carattere %c è un carattere alfa-numerico\n",*av[1]);
	else
		printf("Nope");
}*/
