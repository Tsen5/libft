/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slegros <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 02:27:16 by slegros           #+#    #+#             */
/*   Updated: 2017/11/10 03:23:17 by slegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char		*mem;
	size_t		i;

	mem = b;
	i = 0;
	while (i < len)
	{
		mem[i] = c;
		i++;
	}
	return (mem);
}
