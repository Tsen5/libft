#include "libft.h"

void	ft_putnbr_col_fd(int nb, char *col, int fd)
{
	ft_putstr_fd(col, fd);
	ft_putnbr_fd(nb, fd);
	ft_putstr_fd(RESET, fd);
}
