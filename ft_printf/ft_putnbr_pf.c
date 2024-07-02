/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:46:26 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/12/07 11:23:57 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(int n)
{
	int	cnt;

	cnt = 0;
	if (n == -2147483648)
	{
		cnt += ft_putchar_pf('-');
		cnt += ft_putchar_pf('2');
		n = 147483648;
	}
	if (n < 0)
	{
		cnt += ft_putchar_pf('-');
		n = -n;
	}
	if (n < 10)
		cnt += ft_putchar_pf(n + '0');
	else
	{
		cnt += ft_putnbr_pf(n / 10);
		cnt += ft_putchar_pf((n % 10) + '0');
	}
	return (cnt);
}
