#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*start;
	int		len;
	char	*ref;

	start = (char *)s;
	while (*s)
		s++;
	len = s - start;
	start = (char *)malloc(sizeof(char) * len + 1);
	if (!start)
		return (0);
	s -= len;
	while (*s)
		*(start++) = *(s++);
	*start = '\0';
	start -= len;
	return (start);
}

int	main(int ac, char **av)
{
  printf("Indirizzo memoria primo argomento %p\n",av[1]);
	char *str = ft_strdup(av[1]);
  printf("Indirizzo memoria primo argomento %p\n",str);
}
