#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	while (n-- > 0)
		*((unsigned char *)s++) = '\0';
}

// int	main(void)
// {
// 	char	str[] = "ciao";
// 	void	*s;
// 	char	*str2;

// 	// char *str = "ciao";
// 	// This has to be made with string array instead of pointers else we get a seg fault.
// 	s = str;
// 	ft_bzero(s, 1); // We delete "c" from ciao
// 	str2 = str;
// 	// Assign str address to str2 and increment by one cause first letter is now a null byte.
// 	str2 += 1;
// 	printf("%s\n", str2);
// }
