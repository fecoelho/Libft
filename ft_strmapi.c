/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 21:31:35 by fcoelho           #+#    #+#             */
/*   Updated: 2020/01/29 21:38:50 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*sptr;
	int		index;

	if (!s || !f)
		return (NULL);
	if (!(sptr = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	index = 0;
	while (s[index])
	{
		sptr[index] = f(index, s[index]);
		++index;
	}
	sptr[index] = '\0';
	return (sptr);
}
