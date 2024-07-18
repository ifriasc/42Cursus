/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   controller.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:27:58 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/18 13:46:01 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	move_up(t_data *data)
{
	int	x;
	int	y;

	x = data->p_x;
	y = data->p_y;
	if (data->map[x - 1][y] != '1')
	{
		ft_update_data(data, x - 1, y);
		data->p_x--;
		data->map[x - 1][y] = 'P';
		data->map[x][y] = '0';
		mlx_image_to_window(data->mlx, data->img[0], (x - 1) * 84, y*84);
		mlx_image_to_window(data->mlx, data->img[3], x * 84, y*84);
		//ft_update_window(data);
		ft_printf("Moves: %d\n", data->moves);
	}
}

/* void	move_down(t_data *data)
{
	int	x;
	int	y;

	x = data->p_x;
	y = data->p_y;
	if (y + 1 < data->height && data->map[x][y + 1] != '1')
	{
		ft_update_data(data);
		data->map[x][y + 1] = 'P';
		data->map[x][y] = '0';
		ft_printf("Moves: %d\n", data->moves);
	}
} */

void	controller(mlx_key_data_t key, void *param)
{
	t_data	*data;

	data = param;

	if (key.action == MLX_PRESS && key.key == MLX_KEY_ESCAPE)
		mlx_close_window(data->mlx);
	if (key.key == MLX_KEY_W)
		move_up(data);
/* 		if (key.key == MLX_KEY_S)
		move_down(data);
	if (key.key == MLX_KEY_A)
		move_left(data);
	if (key.key == MLX_KEY_D)
		move_right(data); */
}