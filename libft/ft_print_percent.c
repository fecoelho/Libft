/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_percent.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 22:39:54 by fcoelho           #+#    #+#             */
/*   Updated: 2020/08/07 22:41:02 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_print_percent(t_flags flags)
{
	int		count;

	count = 0;
	if (flags.minus == 1)
		count += ft_putlstr("%", 1);
	count += ft_print_width(flags.width, 1, flags.zero);
	if (flags.minus == 0)
		count += ft_putlstr("%", 1);
	return (count);
}
