#include "ft_strlen.c"
#include <stdlib.h>

char	to_upper(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c -= 32);
	else
		return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				s_len;
	char			*new;
	unsigned int	i;

	if (!s || !f)
		return (0);
	s_len = ft_strlen((char *)s);
	new = (char *)malloc(sizeof(char) * (s_len + 1));
	if (!new)
		return (0);
	i = 0;
	while (s[i])
	{
		new[i] = (f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

int	main(void)
{
	printf("%s\n", ft_strmapi("kdfladgjakgjalf", to_upper));
}
