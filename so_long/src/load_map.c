/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:41:38 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/16 13:40:14 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	load_map(t_data *data)
{
	int	i;
	int	j;

	i = 0;
	while (i < data->height)
	{
		j = 0;
		while (j < data->width)
		{
			if (data->map[i][j] == 'P')
				data->texture = mlx_load_png("../images/knight.png");
			else if (data->map[i][j] == 'C')
				data->texture = mlx_load_png("../images/coin.png");
			else if (data->map[i][j] == 'E')
				data->texture = mlx_load_png("../images/exit.png");
			else if (data->map[i][j] == '0')
				data->texture = mlx_load_png("../images/empty.png");
			else if (data->map[i][j] == '1')
				data->texture = mlx_load_png("../images/wall.png");
			data->img = mlx_texture_to_image(data->mlx, data->texture);
			if (mlx_image_to_window(data->mlx, data->img, i, j) < 0)
				ft_error('7');
			j++;
		}
		i++;
	}
}
