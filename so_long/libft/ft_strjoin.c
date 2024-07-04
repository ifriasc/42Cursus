/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 16:28:49 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/10/09 16:28:49 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	ssize_t	i;
	ssize_t	j;
	
	if (!s1)
	{
		s1 = (char *) malloc (sizeof(char) + 1);
		if (!s1)
			return (NULL);
		s1[0] = 0;
	}
	res = (char *) malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (s1[++i] != '\0')
		res[i] = s1[i];
	j = -1;
	while (s2[++j])
		res[i + j] = s2[j];
	res[i + j] = '\0';
	free(s1);
	s1 = NULL;
	return (res);
}
