/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:31:49 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/10/09 16:31:49 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = (char *) malloc (nmemb * size);
	if (!p)
		return (NULL);
	else
		ft_bzero (p, nmemb * size);
	return (p);
}
