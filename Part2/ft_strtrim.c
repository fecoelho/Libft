/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 21:19:50 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/15 02:24:09 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Retorna uma cópia da string s1 porém com os caracteres iguais ao caracter
** da variavel set removidos do começo e do final.
*/

#include "libft.h"

static unsigned int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	int				i;
	unsigned int	outstr_size;
	char			*outstr_start;
	char			*outstr_end;
	char			*outstr;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	outstr_start = (char *)&s1[i];
	if ((i = ft_strlen(s1) - 1) != -1)
		while (i >= 0 && is_in_set(s1[i], set))
			i--;
	outstr_end = (char *)&s1[i];
	if (!*s1 || outstr_end == outstr_start)
		outstr_size = 2;
	else
		outstr_size = outstr_end - outstr_start + 2;
	if (!(outstr = malloc(sizeof(char) * outstr_size)))
		return (NULL);
	ft_strlcpy(outstr, outstr_start, outstr_size);
	return (outstr);
}
