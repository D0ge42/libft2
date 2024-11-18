#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
  while(n > 0)
  {
    if ((*(unsigned char *)s1) != *((unsigned char *)s2))
      return (*((unsigned char *)s1) - *(unsigned char *)s2);
    s1++;
    s2++;
    n--;
  }
  return 0;
}

#include <stdlib.h>
int main(int ac, char **av)
{
  printf("%i\n", ft_memcmp(av[1],av[2],atoi(av[3])));
  printf("%i\n", memcmp(av[1], av[2], atoi(av[3])));
}

