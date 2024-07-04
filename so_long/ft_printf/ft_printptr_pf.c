/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr_pf.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 11:31:10 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/04 17:41:25 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printptr_pf(void *ptr)
{
	int	length;

	length = 0;
	if (!ptr)
	{
		length += ft_putstr_pf("0x0");
	}
	else
	{
		length += ft_putstr_pf("0x");
		length += ft_putnbrbase_pf((unsigned long) ptr, 16, 'x');
	}
	return (length);
}
