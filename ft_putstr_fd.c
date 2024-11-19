#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, &(*s++), 1);
}

// int	main(void)
// {
// 	ft_putstr_fd("ciao", 1);
// }
