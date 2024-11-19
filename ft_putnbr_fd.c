#include "ft_atoi.c"
#include "ft_putchar_fd.c"
#include "ft_putstr_fd.c"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return ;
	}
	else if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

int	main(int ac, char **av)
{
	ft_putnbr_fd(ft_atoi(av[1]), 1);
}
