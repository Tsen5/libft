#include "libft.h"

int		ft_strnbc(char *str, char c)
{
	int		i;
	int		estin;

	i = 0;
	estin = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			estin++;
		i++;
	}
	return (estin);
}
