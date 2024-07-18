/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 11:41:38 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/18 12:21:12 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	load_textures(t_data *data)
{
	data->texture[0] = mlx_load_png("images/knight.png");
	data->texture[1] = mlx_load_png("images/coin.png");
	data->texture[2] = mlx_load_png("images/exit.png");
	data->texture[3] = mlx_load_png("images/empty.png");
	data->texture[4] = mlx_load_png("images/wall.png");

	if (!data->texture[0] 
		|| !data->texture[1] 
		|| !data->texture[2] 
		|| !data->texture[3] 
		|| !data->texture[4])
		ft_error("Can't load the texture \n", data);
}

void	load_images(t_data *data)
{
	data->img[0] = mlx_texture_to_image(data->mlx, data->texture[0]);
	data->img[1] = mlx_texture_to_image(data->mlx, data->texture[1]);
	data->img[2] = mlx_texture_to_image(data->mlx, data->texture[2]);
	data->img[3] = mlx_texture_to_image(data->mlx, data->texture[3]);
	data->img[4] = mlx_texture_to_image(data->mlx, data->texture[4]);

	if (!data->img[0] 
		|| !data->img[1] 
		|| !data->img[2] 
		|| !data->img[3] 
		|| !data->img[4])
		ft_error("Cannot convert the texture to image\n", data);
}

void	load_map(t_data *data)//aqui da seggmentation
{
	int	i;
	int	j;

	load_textures(data);
	load_images(data);
	i = 0;
	while (i < data->width)
	{
		j = 0;
		while (j < data->height)
		{
			if (data->map[j][i] == 'P')
				mlx_image_to_window(data->mlx, data->img[0], i*84, j*84);
			else if (data->map[j][i] == 'C')
				mlx_image_to_window(data->mlx, data->img[1], i*84, j*84);
			else if (data->map[j][i] == 'E')
				mlx_image_to_window(data->mlx, data->img[2], i*84, j*84);
			else if (data->map[j][i] == '0')
				mlx_image_to_window(data->mlx, data->img[3], i*84, j*84);
			else if (data->map[j][i] == '1')
				mlx_image_to_window(data->mlx, data->img[4], i*84, j*84);
			j++;
		}
		i++;
	}
}
