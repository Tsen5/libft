#include "libft.h"

void	ft_putnbr_col(int nb, char *col)
{
	ft_putstr(col);
	ft_putnbr(nb);
	ft_putstr(RESET);
}
