/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:09:22 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/04 19:09:23 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void    ft_error(char error)
{
    ft_printf("Error\n");
    if(error == '1')
		ft_printf("The map is not rectangle\n");
    else if (error == '2')
        ft_printf("The map is not closed\n");
}