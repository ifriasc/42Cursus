/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:05:11 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/03/22 13:15:31 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	cnt;

	if (!str)
		return (0);
	cnt = 0;
	while (str[cnt] != '\0')
		cnt++;
	return (cnt);
}

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

char	*ft_strjoin(char *s1, char *s2)
{
	char	*res;
	ssize_t	i;
	ssize_t	j;

	if (!s1)
	{
		s1 = (char *) malloc (sizeof(char)  + 1);
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
