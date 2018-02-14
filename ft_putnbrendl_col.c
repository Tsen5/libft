#include "libft.h"

void	ft_putnbrendl_col(int nb, char *col)
{
	ft_putstr(col);
	ft_putnbr(nb);
	ft_putendl(RESET);
}
