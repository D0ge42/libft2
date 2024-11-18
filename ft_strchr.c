#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (c == *s)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

// int main()
// {
//   const char *str ="bubugs";
//   int c = 32;

//   printf("%p\n",ft_strchr(str,c));
//   //printf("%p\n",strchr(str,c));
// }
