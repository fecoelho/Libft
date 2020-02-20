/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 04:57:46 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/20 19:23:03 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Verifica se o caracter contido na variavel c é um valor da tabela ASCII
** padrão.
*/

#include "libft.h"

int		ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
