/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 11:28:40 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/10/16 12:15:36 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	char	*res;
	int		i;

	res = (char *) malloc (ft_strlen(s) + 1);
	if (!s || ! res)
		return (0);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, *(char *)&s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
