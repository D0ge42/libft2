#include <string.h>
#include <stdio.h>


//Even if function returns void * you can return unsigned char *s or w/e you want, as long as it's a pointer.
//YOu can increment the pointer value of a const variable, as long as you don't modify data inside it.
void	*memchr(const void *s, int c, size_t n)
{
  printf("%p\n",s);
	while ((unsigned char *)s && n-- > 0)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
    printf("%p\n",s);
	}
	return (0);
}


int	main(void)
{
	char	*str;
	int		c;

	str = "ciaoneciaoneciau";
	c = 'u';
	printf("%s\n", (char *)memchr(str, c, 17));
}
