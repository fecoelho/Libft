/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 18:58:25 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/15 02:34:13 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Escreve o caracter que está contido na variável char. É necessário também
** que seja dado o tipo de Output desejado.
*/

#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
