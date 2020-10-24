/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/05 15:35:45 by fcoelho           #+#    #+#             */
/*   Updated: 2020/08/05 15:35:48 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
