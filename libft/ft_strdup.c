/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 06:15:47 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/15 02:16:40 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Aloca memória no tamanho da string recebida s1. Coloca a string na memória
** alocada.
*/

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*nstr;
	size_t	len;
	int		i;

	len = ft_strlen((char*)s1);
	if (!(nstr = (char*)malloc(sizeof(*nstr) * (len + 1))))
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		nstr[i] = s1[i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
