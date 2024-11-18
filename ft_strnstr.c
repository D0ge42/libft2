#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*first_occ;
  char *orig_little = (char *)little;

	if (*little == '\0')
		return ((char *)big);
	while (len > 0 && *big)
	{
		if (*big == *little)
		{
			first_occ = (char *)big;
			while (*big == *little && *big)
			{
				little++;
				big++;
			}
      if (*(char *)little == '\0')
				return (first_occ);
      else
      {
        little = orig_little; //Resets both little and big and start searching again.
        big = first_occ;
      }
		}
		big++; //Plus one to big, because we already searched for first_occ char
		len--; //1 less iteration for len.
	}
	return (0);
}

// #include <stdlib.h>

// int	main(int ac, char **av)
// {
// 	
//   printf("%s\n", ft_strnstr(av[1], av[2], atoi(av[3])));
// }
