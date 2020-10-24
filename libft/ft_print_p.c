/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 22:38:36 by fcoelho           #+#    #+#             */
/*   Updated: 2020/08/07 22:39:13 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_width_p(char *str, t_flags flags)
{
	int		count;

	count = 0;
	count += ft_putlstr("0x", 2);
	if (flags.dot >= 0)
	{
		count += ft_print_width(flags.dot, ft_strlen(str), 1);
		count += ft_putlstr(str, flags.dot);
	}
	else
		count += ft_putlstr(str, ft_strlen(str));
	return (count);
}

static int		ft_prefix_p(t_flags flags)
{
	int		count;

	count = 0;
	if (flags.width >= 0 && flags.minus == 0)
	{
		count += ft_print_width(flags.width - 2, 0, 0);
		count += ft_putlstr("0x", 2);
	}
	else
	{
		count += ft_putlstr("0x", 2);
		count += ft_print_width(flags.width - 2, 0, 0);
	}
	return (count);
}

int				ft_print_p(size_t num, t_flags flags)
{
	char		*str;
	int			count;

	count = 0;
	if (flags.dot == 0 && !num)
		return (ft_prefix_p(flags));
	str = ft_itoa_base(num, 16);
	str = ft_str_lowcase(str);
	if ((size_t)flags.dot < ft_strlen(str))
		flags.dot = ft_strlen(str);
	if (flags.minus == 1)
		count += ft_width_p(str, flags);
	count += ft_print_width(flags.width, ft_strlen(str) + 2, 0);
	if (flags.minus == 0)
		count += ft_width_p(str, flags);
	free(str);
	return (count);
}
