#include "ft_strtrim.c"
#include <stdio.h>
#include <stdlib.h>

// Function to find how many words there are in a string.
// Words are parts of string, delimited by char c.
int	count_words(const char *s, char c)
{
	int	words_count;

	if (s[0] == '\0')
		return (0);
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
	int		i;
	int		k;
	char	**phrase;
	int		words;

	words = count_words(s, c);
	i = 0;
	phrase = (char **)malloc(sizeof(char *) * (words + 1));
	if (!phrase)
		return (0);
	while (words-- > 0)
	{
		k = 0;
		s = char_skipper((char *)s, c, '=');
		start = (char *)s;
		s = char_skipper((char *)s, c, '!');
		phrase[i] = (char *)malloc(sizeof(char) * ((s - start) + 1));
		while (start < s)
			phrase[i][k++] = *start++;
		phrase[i++][k] = '\0';
	}
	phrase[i] = NULL;
	return (phrase);
}

// int	main(void)
// {
// 	int		i;
// 	char	*str;
// 	int		count;
// 	char	**string;

// 	i = 0;
// 	str = "++ciao,++uno,+due+tre+++";
// 	count = count_words((const char *)str, '+');
// 	string = ft_split(str, '+');
// 	while (i < count)
// 	{
// 		printf("%s\n", string[i]);
// 		i++;
// 	}
// }
