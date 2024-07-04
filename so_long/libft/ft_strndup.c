/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:24:34 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/04 18:24:59 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(char *s, int n)
{
	int		i;
	char	*res;

	res = malloc(sizeof(char) * (n + 1));
	if (!res || !s)
	{
		free(res);
		res = NULL;
		return (NULL);
	}
	i = 0;
	while (i < n && s[i])
	{
		res[i] = s[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
