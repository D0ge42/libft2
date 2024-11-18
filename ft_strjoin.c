#include "ft_strlen.c"
#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1_len;
	int		s2_len;
	char	*join;

	i = 0;
	s1_len = ft_strlen((char *)s1);
	s2_len = ft_strlen((char *)s2);
	join = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!join)
		return (0);
	while (*s1)
	{
		*(join++) = *(s1++);
		i++;
	}
	while (*s2)
	{
		*(join++) = *(s2++);
		i++;
	}
	*join = '\0';
	return (join - i);
}

int	main(void)
{
	printf("%s\n", ft_strjoin("ciao", "bello"));
}
