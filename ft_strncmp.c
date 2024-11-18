#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
#include <stdlib.h>

int	main(int ac, char **av)
{
	int	diff;

	diff = printf("Diff is %i\n", ft_strncmp(av[1], av[2], atoi(av[3])));
}
