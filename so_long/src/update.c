/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:41:22 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/18 13:47:10 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_update_data(t_data *data, int new_x, int new_y)
{
	if (data->map[new_x][new_y] == 'C')
	{
		data->picked++;
	}

	if (data->map[new_x][new_y] == 'E')
	{
		if (data->picked == data->coins)
			ft_printf("YOU WIN!!");
	}

	data->moves++;
}