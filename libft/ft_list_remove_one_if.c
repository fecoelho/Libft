/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_one_if.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <fcoelho@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/24 13:36:08 by fcoelho           #+#    #+#             */
/*   Updated: 2020/10/24 13:36:23 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	remove_front(t_list **begin_list, void (*free_fct)(void *))
{
	t_list	*prev;

	prev = *begin_list;
	*begin_list = prev->next;
	(*free_fct)(prev->content);
	prev->content = 0;
	free(prev);
	prev = 0;
}

void	ft_list_remove_one_if(t_list **begin_list, void *data_ref,
		int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*prev;
	t_list	*next;

	if (!begin_list || !*begin_list)
		return ;
	if (!(*cmp)((*begin_list)->content, data_ref))
	{
		remove_front(begin_list, free_fct);
		return ;
	}
	prev = *begin_list;
	next = (*begin_list)->next;
	while (prev)
	{
		if (next && !(*cmp)(next->content, data_ref))
		{
			prev->next = next->next;
			(*free_fct)(next->content);
			free(next);
			next = prev->next;
			return ;
		}
		prev = prev->next;
		next = (next) ? next->next : next;
	}
}
