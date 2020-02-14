/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:02:17 by fcoelho           #+#    #+#             */
/*   Updated: 2020/01/25 07:18:42 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	len;
	size_t	dst_len;

	if (!(d = (char *)ft_memchr(dst, '\0', size)))
		return (size + ft_strlen(src));
	s = (char *)src;
	d = (char *)dst;
	dst_len = ft_strlen(dst);
	len = dst_len + ft_strlen(s);
	d += dst_len;
	while (dst_len++ < size - 1 && *s)
		*d++ = *s++;
	*d = '\0';
	return (len);
}
