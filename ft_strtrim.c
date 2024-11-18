#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
int	ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*substr;
	int		len;

	i = 0;
	start = 0;
	end = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[start]))
		start++;
	if (start == end)
		start = 0;
	while (ft_strchr(set, s1[end - 1]))
		end--;
	substr = malloc(sizeof(char) * (end - start + 1));
  if(!substr)
    return 0;
	while (start < end)
		substr[i++] = s1[start++];
	substr[i] = '\0';
	return (substr);
}

// int	main(void)
// {
// 	printf("%s\n", ft_strtrim("c-c+-c*", "+-*/,"));
// }
