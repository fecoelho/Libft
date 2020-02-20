/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcoelho <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/06 15:59:26 by fcoelho           #+#    #+#             */
/*   Updated: 2020/02/15 02:37:22 by fcoelho          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Adiciona um novo elemento na lista.
*/

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nlst;

	if (!(nlst = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (!content)
		nlst->content = NULL;
	else
		nlst->content = content;
	nlst->next = NULL;
	return (nlst);
}
