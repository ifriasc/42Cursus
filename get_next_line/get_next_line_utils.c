/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 10:05:11 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/03/14 13:02:19 by ifrias-c         ###   ########.fr       */
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
		return (0);
	while (s[cnt])
	{
		if (s[cnt] == (char) c)
			return ((char *)(&s[cnt]));
		cnt++;
	}
	if (s[cnt] == (char) c)
		return ((char *)(&s[cnt]));
	return (0);
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
