#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*start = s;

	while (*s)
		s++;
	printf("%p\n", s);
	printf("%p\n", start);
	while (s >= start)
	{
		if (c == *s)
			return (char *)s;
    s--;
	}
  return 0;
}

int main()
{
  char *str = "ciaone";
  int c = 'u';

  printf("%p\n", ft_strrchr(str, c));
}
