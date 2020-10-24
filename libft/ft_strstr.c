/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:35:35 by fcoelho           #+#    #+#             */
/*   Updated: 2020/10/24 13:35:47 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	while (to_find[i] && str[i] && to_find[i] == str[i])
		i++;
	if (to_find[i] && str[i] && to_find[i] != str[i])
		return (ft_strstr(str + 1, to_find));
	if (!to_find[i] && str[i])
		return (str);
	if (!to_find[i] && !str[i])
		return (str);
	return (0);
}
