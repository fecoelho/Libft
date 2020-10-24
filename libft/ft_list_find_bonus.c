/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 12:22:36 by fcoelho           #+#    #+#             */
/*   Updated: 2020/10/24 12:23:05 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref,
		size_t n, int (*cmp)())
{
	while (begin_list)
	{
		if (!(*cmp)(begin_list->content, data_ref, n))
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (begin_list);
}
