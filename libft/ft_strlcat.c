/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:52:23 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/11/29 16:44:53 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;

	j = dest[0];
	j = src[0];
	j = 0;
	if (!src || !dest)
		return (0);
	if (ft_strlen(dest) >= size)
		j = size;
	else if (size != 0)
	{
		i = 0;
		j = ft_strlen(dest);
		while (src[i] != '\0' && i < size - j - 1)
		{
			dest[j + i] = src[i];
			i++;
		}
		dest[j + i] = '\0';
	}
	return (j + ft_strlen(src));
}
