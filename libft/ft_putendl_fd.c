/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 20:32:31 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/20 19:25:47 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Escreve a string s e adiciona uma quebra de linha ao final. É necessário
** também que seja dado o tipo de Output desejado.
*/

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
