/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 19:09:22 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/18 11:01:14 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	ft_error(char *error, t_data *data)
{
	ft_printf("Error\n");
	ft_printf("%s", error);
	if (data->texture)
		mlx_delete_texture(data->texture);
    if (data->img)
		mlx_delete_image(data->mlx, data->img);
	if (data->mlx)
		mlx_terminate(data->mlx);
	exit(EXIT_FAILURE);
}
