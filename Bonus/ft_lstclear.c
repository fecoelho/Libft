/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 19:37:59 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/15 02:42:45 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Deleta um elemento e todos os outros elementos que existem depois dele.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*alst;

	if (lst || del)
	{
		while (*lst)
		{
			alst = (*lst)->next;
			ft_lstdelone(*lst, del);
			(*lst) = alst;
		}
	}
}
