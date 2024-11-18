#include "ft_strtrim.c"
#include <stdio.h>
#include <stdlib.h>

// Function to find how many words there are in a string.
// Words are parts of string, delimited by char c.
int	count_words(const char *s, char c)
{
  if (s[0] == '\0')
    return 0;
	int	words_count;
  words_count = 1;
	s = ft_strtrim(s, &c);
	while (*s)
	{
		if (*s == c)
		{
			words_count += 1;
			while (*s == c && *s)
				s++;
		}
		s++;
	}
	return (words_count);
}

char	*char_skipper(char *s, char c, char x)
{
	if (x == '=')
	{
		while (*s == c && *s)
			s++;
	}
	else if (x == '!')
	{
		while (*s != c && *s)
			s++;
	}
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	*start;
	char	*end;
	int		i;
	int		k;
	char	**phrase;
  int words = count_words(s, c);

	i = 0;
	phrase = (char **)malloc(sizeof(char *) * words);
	if (!phrase)
		return (0);
	while (words-- > 0)
	{
		s = char_skipper((char *)s, c, '=');
		start = (char *)s;
		k = 0;
		s = char_skipper((char *)s, c, '!');
		end = (char *)s;
		phrase[i] = (char *)malloc(sizeof(char) * ((end - start) + 1));
		if (!phrase[i])
			return (0);
		while (start < end)
			phrase[i][k++] = *start++;
		phrase[i++][k] = '\0';
	}
	return (phrase);
}

int	main(void)
{
	int		i;
	char	*str;
	int		count;
	char	**string;

	i = 0;
	str = " +,ciao,++uno,+due+tre";
	count = count_words((const char *)str, '+');
  printf("%i\n",count);
	string = ft_split(str, '+');
	while (i < count)
	{
		printf("%s\n", string[i]);
		i++;
	}
}
