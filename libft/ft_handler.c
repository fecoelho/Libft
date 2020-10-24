/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/07 21:38:41 by fcoelho           #+#    #+#             */
/*   Updated: 2020/08/07 21:38:42 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_isconversion(int c)
{
	return (c == 'c' || c == 's' || c == 'p' || c == 'd' || c == 'i' ||
					c == 'u' || c == 'x' || c == 'X' || c == '%');
}

int			ft_isflags(int c)
{
	return (c == '-' || c == '0' || c == '.' || c == '*' || c == ' ');
}

int			ft_handler(int c, t_flags flags, va_list args)
{
	int		count;

	count = 0;
	if (c == 'c')
		count = ft_print_c(va_arg(args, int), flags);
	else if (c == 's')
		count = ft_print_s(va_arg(args, char*), flags);
	else if (c == 'p')
		count = ft_print_p(va_arg(args, size_t), flags);
	else if (c == 'd' || c == 'i')
		count = ft_print_di(va_arg(args, int), flags);
	else if (c == 'u')
		count += ft_print_u(va_arg(args, unsigned int), flags);
	else if (c == 'x')
		count += ft_print_x(va_arg(args, unsigned int), 1, flags);
	else if (c == 'X')
		count += ft_print_x(va_arg(args, unsigned int), 0, flags);
	else if (c == '%')
		count += ft_print_percent(flags);
	return (count);
}
