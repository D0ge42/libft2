#include <stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		if(ft_isascii(*av[1]))
			printf("Yes, it is within ascii charset n° %d\n",*av[1]);
		else
			printf("Nope, it's not");
	}

}
