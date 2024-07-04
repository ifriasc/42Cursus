/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:14:19 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/04 18:30:14 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char *set)
{
	int		i;
	int		j;
	char	*res;

	if (!s1)
		return (NULL);
	if (!set && !*set)
		return (ft_strdup(s1));
	i = 0;
	while (s1 && ft_strchr(set, s1[i]) && s1[i] != '\0')
		i++;
	j = ft_strlen(s1) - 1;
	if (j < 0)
		j = 0;
	while (s1 && ft_strchr(set, s1[j]) && j >= 0 && s1[j] != '\0')
		j--;
	res = ft_substr(s1, i, (j - i) + 1);
	return (res);
}
