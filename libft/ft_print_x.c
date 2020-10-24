/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_Xx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 22:46:02 by fcoelho           #+#    #+#             */
/*   Updated: 2020/08/07 22:46:25 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_width_x(char *hex, t_flags flags)
{
	int			count;

	count = 0;
	if (flags.dot >= 0)
		count += ft_print_width(flags.dot - 1, ft_strlen(hex) - 1, 1);
	count += ft_putlstr(hex, ft_strlen(hex));
	return (count);
}

static int		ft_print_hex(char *hex, t_flags flags)
{
	int			count;

	count = 0;
	if (flags.minus == 1)
		count += ft_width_x(hex, flags);
	if (flags.dot >= 0 && (size_t)flags.dot < ft_strlen(hex))
		flags.dot = ft_strlen(hex);
	if (flags.dot >= 0)
	{
		flags.width -= flags.dot;
		count += ft_print_width(flags.width, 0, 0);
	}
	else
		count += ft_print_width(flags.width, ft_strlen(hex), flags.zero);
	if (flags.minus == 0)
		count += ft_width_x(hex, flags);
	return (count);
}

int				ft_print_x(unsigned int num, int lowcase, t_flags flags)
{
	char		*tmp;
	int			count;

	count = 0;
	num = (unsigned int)(4294967295 + 1 + num);
	if (flags.dot == 0 && num == 0)
	{
		count += ft_print_width(flags.width, 0, 0);
		return (count);
	}
	tmp = ft_itoa_base(num, 16);
	if (lowcase == 1)
		tmp = ft_str_lowcase(tmp);
	count += ft_print_hex(tmp, flags);
	free(tmp);
	return (count);
}
