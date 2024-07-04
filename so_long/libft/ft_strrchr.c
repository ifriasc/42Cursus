/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:03:48 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/11/27 18:43:24 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == (char) c)
			return ((char *)(&s[i]));
		i--;
	}
	if (s[i] == (char) c)
		return ((char *)(&s[i]));
	return (NULL);
}
