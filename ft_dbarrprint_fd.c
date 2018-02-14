#include "libft.h"

void	ft_dbarrprint_fd(char **dbarr, int fd)
{
	int		i;

	i = 0;
	while (dbarr[i] != NULL)
	{
		ft_putendl_fd(dbarr[i], fd);
		i++;
	}
}
