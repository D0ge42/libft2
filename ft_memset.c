#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n-- > 0)
		*(str++) = (unsigned char)c;
	return (s);
}

/*int main()
{
	char buffer[10];
	ft_memset(buffer, 'Z', 10);
	printf("%s\n", buffer);
}*/
