/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:29:36 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/18 13:30:16 by ifrias-c         ###   ########.fr       */
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
	data->moves = 0;
}

void	check_args(int argc, char **argv, t_data *data)
{
	if (argc < 2)
		ft_error("Missing map as an argument\n", data);
	else if (argc > 2)
		ft_error("Many arguments provided (needed only the map)\n", data);
	else if (ft_strncmp(argv[1] + ((int) ft_strlen(argv[1]) - 4),".ber", 4))
		ft_error("The map extension is not .ber\n", data);
}

int	main(int argc, char **argv)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	init_struct(data);
	check_args(argc, argv, data);
	read_map(argv[1], data);
	data->mlx = mlx_init(data->width * 128, data->height * 128, "So_long", 1);
	if (!data->mlx)
		ft_error("Cannot build the window", data);
	load_map(data);
	//mlx_loop_hook(game.mlx, &hook, &game);
	mlx_key_hook(data->mlx, &controller, data);
	mlx_loop(data->mlx);
	return (EXIT_SUCCESS);
}
