/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:09:22 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/16 12:53:59 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_error(char error)
{
	ft_printf("Error\n");
	if (error == '1')
		ft_printf("The map is not rectangle\n");
	else if (error == '2')
		ft_printf("The map is not closed\n");
	else if (error == '3')
		ft_printf("Missing/repeated/wrong elements\n");
	else if (error == '4')
		ft_printf("The map has not valid path\n");
	else if (error == '5')
		ft_printf("Missing map");
	else if (error == '6')
		ft_printf("Cannot create the window");
	else if (error == '7')
		ft_printf("Cannot load images to the window");
}
