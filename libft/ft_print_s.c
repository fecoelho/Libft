/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 22:41:49 by fcoelho           #+#    #+#             */
/*   Updated: 2020/08/07 22:43:29 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_width_s(char *c, t_flags flags)
{
	int		count;

	count = 0;
	if (flags.dot >= 0)
	{
		count += ft_print_width(flags.dot, ft_strlen(c), 0);
		count += ft_putlstr(c, flags.dot);
	}
	else
		count += ft_putlstr(c, ft_strlen(c));
	return (count);
}

int			ft_print_s(char *c, t_flags flags)
{
	int		count;

	count = 0;
	if (!c)
		c = ("(null)");
	if (flags.dot >= 0 && (size_t)flags.dot > ft_strlen(c))
		flags.dot = ft_strlen(c);
	if (flags.minus == 1)
		count += ft_width_s(c, flags);
	if (flags.dot >= 0)
		count += ft_print_width(flags.width, flags.dot, 0);
	else
		count += ft_print_width(flags.width, ft_strlen(c), flags.zero);
	if (flags.minus == 0)
		count += ft_width_s(c, flags);
	return (count);
}
