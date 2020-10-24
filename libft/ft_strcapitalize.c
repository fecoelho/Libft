/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 19:33:01 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/20 20:37:48 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		g_i;

static char	*auxilial(char *str)
{
	while (str[g_i] != ' ')
	{
		if (str[g_i] == '\n')
			break ;
		else if (str[g_i] == '-' || str[g_i] == '+')
			break ;
		g_i++;
	}
	return (str);
}

char		*ft_strcapitalize(char *str)
{
	g_i = 0;
	ft_strlowcase(str);
	while (str[g_i] != '\0')
	{
		while (str[g_i] <= 'a' && str[g_i] >= 'z')
			g_i++;
		if ((str[g_i] >= 'a' && str[g_i] <= 'z'))
		{
			str[g_i] -= 32;
			while (str[g_i] != ' ')
			{
				if (str[g_i] == '\n')
					break ;
				else if (str[g_i] == '-' || str[g_i] == '+')
					break ;
				g_i++;
			}
		}
		else if (str[g_i] >= '0' && str[g_i] <= '9')
			auxilial(str);
		g_i++;
	}
	return (str);
}
