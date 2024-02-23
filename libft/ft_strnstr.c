/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 18:34:34 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/11/27 18:44:40 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	tam;
	size_t	i;
	size_t	j;

	tam = ft_strlen(needle);
	if (tam == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while (j < tam && needle[j] == haystack[i + j] && i + j < len)
				j++;
			if (j == tam)
				return ((char *)(&haystack[i]));
		}
		i++;
	}
	return (0);
}
