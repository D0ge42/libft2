#include <stdio.h>

int ft_strlen(char *str)
{
	char *s = str;
	while(*str)
		str++;
	return str - s;
}

/*int main()
{
	int result = 0;
	result = ft_strlen("ciao22");
	printf("%i\n", result);
}*/
