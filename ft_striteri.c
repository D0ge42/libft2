#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		(f)(i, s);
		i++;
	}
}

void	to_lower(unsigned int i, char *str)
{
	if (i % 2 == 0)
		str[i] += 32;
}

int	main(void)
{
	char	str[5] = "CIAO";

	ft_striteri(str, to_lower);
	printf("%s\n", str);
}
