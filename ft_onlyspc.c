#include "libft.h"

int		ft_onlyspc(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_isspace(str[i]) == 0)
			return (0);
		i++;
	}
	return (1);
}