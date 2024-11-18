#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		str_len = 0;

	// Find start of substring in string
	while (start > 0)
	{
		s++;
		start--;
	}
  //Start of substring
  char *str_start = (char *)s;
  
  char *sub_str = malloc(sizeof(char) * (len + 1));

  while(len > 0 && *s)
  {
    *sub_str = *s;
    sub_str++;
    s++;
    len--;
    str_len++;
  }
  *sub_str = '\0';
  return (sub_str - str_len);

}
#include <stdio.h>

int	main(void)
{
	printf("%s\n", ft_substr("arcobaleno", 2, 10));
}
