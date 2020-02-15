/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 03:40:23 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/15 02:08:20 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Transforma os números contigos em uma string para números de propriedade INT
** O nome é a abreviação de Ascii TO Integer.
*/

#include "libft.h"

int		ft_atoi(const char *str)
{
	int	i;
	int neg;
	int result;

	i = 0;
	neg = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n' || str[i] == '\r'
			|| str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		neg = neg * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	if (str[i] < 48 && str[i] > 57)
		return (0);
	while (str[i] >= 48 && str[i] <= 57 && str[i] != '\0')
	{
		result = result * 10;
		result += str[i++] - '0';
	}
	return (result * neg);
}
