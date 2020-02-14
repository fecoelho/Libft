/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 20:52:49 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/10 13:34:21 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char			*dest;
	const char		*srcc;
	unsigned int	i;

	if ((dst == NULL && src == NULL) && n > 0)
		return (NULL);
	dest = dst;
	srcc = src;
	i = 0;
	while (i < n)
	{
		dest[i] = srcc[i];
		i++;
	}
	return (dst);
}
