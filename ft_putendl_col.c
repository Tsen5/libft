#include "libft.h"

void	ft_putendl_col(char *str, char *col)
{
	ft_putstr(col);
	ft_putstr(str);
	ft_putendl(RESET);
}
