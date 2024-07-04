/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 17:23:36 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/11/27 18:41:20 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p1;
	char	*p2;
	int		i;

	if (src < dst && src + len > dst)
	{
		p1 = (char *) src;
		p2 = (char *) dst;
		if (!p1 || !p2)
			return (0);
		i = (int) len - 1;
		while (i >= 0)
		{
			p2[i] = p1[i];
			i--;
		}
	}
	else
		return (ft_memcpy (dst, src, len));
	return (dst);
}
