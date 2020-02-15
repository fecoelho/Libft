/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 18:08:05 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/10 13:31:41 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*alst;

	if (lst || new)
	{
		alst = ft_lstlast(*lst);
		if (alst == NULL)
			(*lst) = new;
		else
		{
			alst->next = new;
		}
	}
}
