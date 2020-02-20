/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 06:03:32 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/15 01:59:47 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Igual a função ft_strchr mas invés de procurar a primeira ocorrência do
** caracter, procura pela última.
*/

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
