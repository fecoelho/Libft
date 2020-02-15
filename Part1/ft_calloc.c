/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 07:05:12 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/15 02:14:53 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Aloca memória no sistema e deixa toda a memória alocada com o valor NULL.
*/

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*cllc;

	if (!(cllc = malloc(size * count)))
		return (NULL);
	ft_bzero(cllc, size * count);
	return (cllc);
}
