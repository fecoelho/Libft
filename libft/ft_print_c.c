/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_c.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 21:56:54 by fcoelho           #+#    #+#             */
/*   Updated: 2020/08/07 21:56:57 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_print_c(char c, t_flags flags)
{
	int		count;

	count = 0;
	if (flags.width == 1)
		ft_putchar(c);
	else if (flags.minus == 1)
	{
		ft_putchar(c);
		count = ft_print_width(flags.width, 1, 0);
	}
	else if (flags.minus == 0)
	{
		count = ft_print_width(flags.width, 1, 0);
		ft_putchar(c);
	}
	count++;
	return (count);
}
