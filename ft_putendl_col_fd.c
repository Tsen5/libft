#include "libft.h"

void	ft_putendl_col_fd(char *str, char *col, int fd)
{
	ft_putstr_fd(col, fd);
	ft_putstr_fd(str, fd);
	ft_putendl_fd(RESET, fd);
}
