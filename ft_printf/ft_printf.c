/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:19:57 by ifrias-c          #+#    #+#             */
/*   Updated: 2023/12/07 13:32:52 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char const *input, va_list args)
{
	int	length;

	length = 0;
	if (*input == 'c')
		length += ft_putchar_pf(va_arg(args, int));
	else if (*input == 's')
		length += ft_putstr_pf(va_arg(args, char *));
	else if (*input == 'p')
		length += ft_printptr_pf(va_arg(args, void *));
	else if (*input == 'i' || *input == 'd')
		length += ft_putnbr_pf(va_arg(args, int));
	else if (*input == 'u')
		length += ft_printunsigned_pf(va_arg(args, unsigned int));
	else if (*input == 'x' || *input == 'X')
	{
		length += ft_putnbrbase_pf(va_arg(args, unsigned int), 16, *input);
	}
	else if (*input == '%')
		length += ft_putchar_pf('%');
	return (length);
}

int	ft_printf(char const *input, ...)
{
	va_list		args;
	int			length;

	va_start(args, input);
	length = 0;
	while (*input)
	{
		if (*input == '%')
		{
			input++;
			length += ft_format(input, args);
		}
		else
			length += ft_putchar_pf(*input);
		input++;
	}
	va_end(args);
	return (length);
}
