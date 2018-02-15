#include "libft.h"

char	**ft_dbarr_free(char **array)
{
	int		i;

	i = -1;
	while (array[++i] != NULL)
		free(array[i]);
	free(array);
	return (array);
}