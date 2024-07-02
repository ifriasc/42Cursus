/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrbase_pf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:36:06 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/12/07 13:11:36 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbrbase_pf(unsigned long n, int base, int begin)
{
	int	length;

	length = 0;
	if (n < (unsigned long) base)
	{
		if (n >= 0 && n <= 9)
			return (ft_putchar_pf(n + '0'));
		else
		{
			if (begin == 'x')
				return (ft_putchar_pf((n % 10) + 'a'));
			else
				return (ft_putchar_pf((n % 10) + 'A'));
		}
	}
	else
	{
		length += ft_putnbrbase_pf((unsigned long) n / base, base, begin);
		length += ft_putnbrbase_pf((unsigned long) n % base, base, begin);
	}
	return (length);
}
