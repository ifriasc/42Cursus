/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:25:19 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/11/27 18:43:39 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cnt;

	cnt = 0;
	while ((s1[cnt] != '\0' || s2[cnt] != '\0') && cnt < n)
	{
		if (s1[cnt] != s2[cnt])
			return ((unsigned char )(s1[cnt]) - (unsigned char)(s2[cnt]));
		cnt++;
	}
	return (0);
}
