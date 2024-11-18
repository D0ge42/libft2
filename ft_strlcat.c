#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < size && dst[i])
		// Ciclo che va avanti finchè c'è spazio nel buffer, o finchè non raggiunge la fine di dst.
		i++;
	// Cycle using j as index. I will stick to the end of dst. Cycle until the sum of i + j + 1 is less then size
	// That way we'll always have space for null terminator.
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	// Check if there's space for null terminator.
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

int	main(int ac, char **av)
{
	int	len;

	len = ft_strlcat(av[1], av[2], atoi(av[3]));
	printf("Lunghezza ipotetica stringa: %i\n", atoi(av[3]));
	printf("Dest dopo la concatenazione %s\n", av[1]);
}
