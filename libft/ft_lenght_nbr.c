/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lenght_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:37:10 by fcoelho           #+#    #+#             */
/*   Updated: 2020/10/24 13:37:22 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lenght_nbr(int nb)
{
	int	size_nb;
	int	result;

	result = 1;
	size_nb = 0;
	while (result)
	{
		result = nb / 10;
		nb = result;
		size_nb++;
	}
	return (size_nb);
}
