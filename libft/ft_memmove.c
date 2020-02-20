/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:20:35 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/20 19:25:28 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** É uma versão mais segura da ft_memcpy.
*/

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	const char	*srcc;
	char		*dest;

	dest = dst;
	srcc = src;
	if (dst > src)
	{
		i = len;
		while (i > 0)
		{
			dest[i - 1] = srcc[i - 1];
			i--;
		}
	}
	else if (dst < src)
		ft_memcpy(dst, src, len);
	return (dst);
}
