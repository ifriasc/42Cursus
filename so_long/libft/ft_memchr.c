/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 17:09:32 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/11/27 18:43:57 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s2;
	size_t			cnt;

	s2 = (unsigned char *) s;
	cnt = 0;
	while (cnt < n)
	{
		if (s2[cnt] == (unsigned char)c)
			return ((void *)(&s2[cnt]));
		cnt++;
	}
	return (NULL);
}
