/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:07:07 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/11/27 18:46:37 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numwords(char const *s, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || !(s[i + 1])))
			words++;
		i++;
	}
	return (words);
}

size_t	ft_strsize(char const *s, int i, int c)
{
	size_t	cnt;

	cnt = 0;
	while (s[i] != c && s[i])
	{
		cnt++;
		i++;
	}
	return (cnt);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;
	size_t	len;

	res = (char **) malloc (sizeof(char *) * (ft_numwords (s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			len = ft_strsize(s, i, c);
			res[j] = ft_substr(s, i, len);
			j++;
			i += len;
		}
		else
			i++;
	}
	res[j] = 0;
	return (res);
}
