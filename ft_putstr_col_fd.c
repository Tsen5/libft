#include "libft.h"

void	ft_putstr_col_fd(char *str, char *col, int fd)
{
	ft_putstr_fd(col, fd);
	ft_putstr_fd(str, fd);
	ft_putstr_fd(RESET, fd);
}
