/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:27:44 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/11/27 16:27:44 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del) (void *))
{
	t_list	*aux;

	if (lst && del)
	{
		while (*lst)
		{
			aux = (*lst)-> next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
	}
}
