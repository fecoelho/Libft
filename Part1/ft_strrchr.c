/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 06:03:32 by fcoelho           #+#    #+#             */
/*   Updated: 2020/01/25 06:15:37 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lp;

	lp = (0);
	while (*s)
	{
		if (*s == c)
			lp = (char*)s;
		s++;
	}
	if (lp)
		return (lp);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
