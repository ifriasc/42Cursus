/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsigned_pf.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:18:00 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/04 17:41:35 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsigned_pf(unsigned int n)
{
	int	length;

	length = 0;
	if (n < 10)
		length += ft_putchar_pf(n + '0');
	else
	{
		length += ft_printunsigned_pf(n / 10);
		length += ft_putchar_pf((n % 10) + '0');
	}
	return (length);
}
