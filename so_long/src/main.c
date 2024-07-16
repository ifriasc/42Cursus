/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:29:36 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/16 13:30:25 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	init_struct(t_data *data)
{
	data->width = 0;
	data->height = 0;
	data->coins = 0;
	data->exit = 0;
	data->exit_x = 0;
	data->exit_y = 0;
	data->player = 0;
	data->p_x = 0;
	data->p_y = 0;
}

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc != 2)
		ft_error('5');
	data = malloc(sizeof(t_data));
	init_struct(data);
	read_map(argv[1], data);
	data->mlx = mlx_init(data->width, data->height, "So_long", 1);
	if (!data->mlx)
		ft_error('6');
	load_map(data);

	free(data->mlx);
}
