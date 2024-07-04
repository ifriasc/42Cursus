/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:26:03 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/04 17:51:16 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char *s, int c)
{
	int		cnt;

	cnt = 0;
	if (!s)
		return (NULL);
	if (c == '\0')
		return ((char *)(&s[ft_strlen(s)]));
	while (s[cnt])
	{
		if (s[cnt] == (char) c)
			return ((char *)(&s[cnt]));
		cnt++;
	}
	return (NULL);
}
