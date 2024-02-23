/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:05:11 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/02/19 19:15:10 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	cnt;

	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

char	*ft_strchr(const char *s, int c)
{
	int		cnt;

	cnt = 0;
	if (!s)
		return (NULL);
	while (s[cnt] != '\0')
	{
		if (s[cnt] == (char) c)
			return ((char *)(&s[cnt]));
		cnt++;
	}
	if (s[cnt] == (char) c)
		return ((char *)(&s[cnt]));
	return (NULL);
}

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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	i;
	size_t	j;

	if (!s2)
		return (0);
	res = (char *) malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		res[i + j] = s2[j];
		j++;
	}
	res[i + j] = '\0';
	return (res);
}
