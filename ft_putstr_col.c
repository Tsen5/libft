#include "libft.h"

void	ft_putstr_col(char *str, char *col)
{
	ft_putstr(col);
	ft_putstr(str);
	ft_putstr(RESET);
}
