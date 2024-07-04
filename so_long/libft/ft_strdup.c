/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:32:48 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/10/09 16:32:48 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ss;
	char	*smem;
	int		i;

	ss = (char *) s;
	smem = (char *) malloc((ft_strlen(ss) + 1));
	if (!smem)
		return (NULL);
	i = 0;
	while (ss[i] != '\0')
	{
		smem[i] = ss[i];
		i++;
	}
	smem[i] = '\0';
	return (smem);
}
