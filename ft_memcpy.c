#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n-- > 0)
		*(d++) = *(s++);
	return (dest);
}

int	main(void)
{
	char	src[4] = "1234";
	char	dest[5] = "5";
	void	*result;
  
  printf("Indirizzo di memoria di dest %p\n", dest);
	printf("Indirizzo di memoria di src %p\n", src);
	result = ft_memcpy(dest, src, 4);
	printf("Indirizzo memoria di result %p\n e contiene %s\n", dest,
		(char *)dest);
}
