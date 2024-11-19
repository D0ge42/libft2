#include "ft_strdup.c"
#include <stdio.h>
#include <stdlib.h>

int	digit_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		count++;
		n /= 10;
	}
	return (count);
}

char	*str_reverse(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	i--;
	while (j < i)
	{
		temp = str[j];
		str[j] = str[i];
		str[i] = temp;
		j++;
		i--;
	}
	return (str);
}

char	*edge_cases(int n)
{
	char	*str;

	if (n == -2147483648)
		str = (ft_strdup("-2147483648"));
	else
		str = (ft_strdup("0"));
	return (str);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;
	int		flag;

	if (!n || n == -2147483648)
		return (edge_cases(n));
	i = 0;
	str = malloc(sizeof(char) * (digit_count(n) + 1));
	if (!str)
		return (0);
	if (n < 0)
	{
		flag = 1;
		n *= -1;
	}
	while (n)
	{
		str[i++] = (n % 10 + '0');
		n /= 10;
	}
	if (flag == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (str_reverse(str));
}

int	main(int ac, char **av)
{
	printf("%s\n", ft_itoa(atoi(av[1])));
}
