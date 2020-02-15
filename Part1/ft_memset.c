/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 18:37:51 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/15 01:36:58 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Coloca na string um caracter qualquer especificado pela variavel c. A
** quantidade de caracteres colocados é definida pela variável len.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char			*strr;
	unsigned char	car;

	strr = str;
	car = (unsigned char)c;
	while (len--)
		*(strr++) = car;
	return (str);
}
