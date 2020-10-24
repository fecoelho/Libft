/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:34:36 by fcoelho           #+#    #+#             */
/*   Updated: 2020/10/24 13:34:51 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**array_char(int line, int column)
{
	char	**array;
	int		i;

	i = -1;
	if (!(array = malloc(sizeof(char *) * (line + 1))))
		return (0);
	while (++i < line)
	{
		if (!(array[i] = malloc(sizeof(char) * (column + 1))))
		{
			while (++i <= 0)
			{
				free(array[i]);
				array[i] = 0;
			}
			return (0);
		}
		array[i][column] = '\0';
	}
	array[line] = 0;
	return (array);
}
