/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 19:14:14 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/20 19:27:16 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Escreve um número que esteja em uma variável de propriedade INT.
** É necessário também que seja dado o tipo de Output desejado.
*/

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		num = (unsigned int)(n * -1);
	}
	else
		num = (unsigned int)n;
	if (num > 10)
		ft_putnbr_fd(num / 10, fd);
	ft_putchar_fd((char)(num % 10 + 48), fd);
}
