#include "libft.h"
#include "sys/types.h"
#include "sys/stat.h"
#include "fcntl.h"

int		main(void)
{
		int		fd;

		fd = open("putx.txt", O_RDWR | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
		if (fd == -1)
				ft_putstr("Open error\n");
		ft_putchar(99);
		ft_putchar(42);
		ft_putstr("putstr");
		ft_putchar(42);
		ft_putendl("putendl");
		ft_putnbr(0);
		ft_putchar(' ');
		ft_putnbr(-10);
		ft_putchar(' ');
		ft_putnbr(9);
		ft_putchar(' ');
		ft_putnbr(-2147483648);
		ft_putchar(' ');
		ft_putnbr(2147483647);
		ft_putendl("");
		ft_putchar(48);
		ft_putstr(" -10 9 -2147483648");
		ft_putendl(" 2147483647");
		ft_putchar_fd(99, fd);
		ft_putchar_fd(42, fd);
		ft_putstr_fd("putstr", fd);
		ft_putchar_fd(42, fd);
		ft_putendl_fd("putendl", fd);
		ft_putnbr_fd(0, fd);
		ft_putchar_fd(' ', fd);
		ft_putnbr_fd(-10, fd);
		ft_putchar_fd(' ', fd);
		ft_putnbr_fd(9, fd);
		ft_putchar_fd(' ', fd);
		ft_putnbr_fd(-2147483648, fd);
		ft_putchar_fd(' ', fd);
		ft_putnbr_fd(2147483647, fd);
		ft_putendl_fd("", fd);
		ft_putchar_fd(48, fd);
		ft_putstr_fd(" -10 9 -2147483648", fd);
		ft_putendl_fd(" 2147483647", fd);
		close (fd);
		return (0);
}
