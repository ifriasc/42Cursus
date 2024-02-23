/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:26:03 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/11/27 18:43:04 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		cnt;

	cnt = 0;
	while (s[cnt])
	{
		if (s[cnt] == (char) c)
			return ((char *)(&s[cnt]));
		cnt++;
	}
	if (s[cnt] == (char) c)
		return ((char *)(&s[cnt]));
	return (NULL);
}
