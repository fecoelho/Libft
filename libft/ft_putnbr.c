/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 17:11:16 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/20 19:26:34 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int	num;

	if (n < 0)
	{
		ft_putchar('-');
		num = (unsigned int)(n * -1);
	}
	else
		num = (unsigned int)n;
	if (num > 10)
		ft_putnbr(num / 10);
	ft_putchar((char)(num % 10 + 48));
}
