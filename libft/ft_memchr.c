/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 21:46:08 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/20 19:23:50 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Procura na string s o caracter contido na variavel c. A quantidade de
** caracteres que serão comparados da string s é definida pela variável n.
** Para de procurar também quando acha ou quando chega ao fim da string.
** Retorna NULL se não for encontrado o caracter.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (void *)s;
	while (i < n)
	{
		if (str[i] == (char)c)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
