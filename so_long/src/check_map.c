/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 09:58:43 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/18 10:47:36 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_rectangle(t_data *data)
{
	size_t	len;
	int		i;

	if (data->height < 2 || data->width < 2)
		return (0);
	else
	{
		i = 1;
		len = ft_strlen(data->map[0]);
		while (i < data->height)
		{
			if (ft_strlen(data->map[i]) != len)
				return (0);
			i++;
		}
	}
	return (1);
}

int	check_closed(t_data *data)
{
	int	i;
	int	j;

	j = 0;
	while (j < data->width)
	{
		if (data->map[0][j] != '1' || data->map[data->height - 1][j] != '1')
			return (0);
		j++;
	}

	i = 1;
	while (i < data->height - 1)
	{
		if (data->map[i++][0] != '1')
			return (0);
	}
	return (1);
}

int	check_elements(t_data *data, int i, int j)
{
	while (i < data->height - 1 && data->map[i])
	{
		j = 1;
		while (j < data->width - 1)
		{
			if (data->map[i][j] == 'P')
			{
				data->player++;
				data->p_x = i;
				data->p_y = j;
			}
			else if (data->map[i][j] == 'E')
			{
				data->exit++;
				data->exit_x = i;
				data->exit_y = j;
			}
			else if (data->map[i][j] == 'C')
				data->coins++;
			j++;
		}
		i++;
	}
	return (data->player == 1 && data->exit == 1 && data->coins >= 1);
}

int	check_path(t_data *data, int row, int col, int cnt)//segmentation
{
	char	aux;
	int		res;

	if (row < 0 || col < 0 || row >= data->height || col >= data->width)
		return (0);
	if (data->map[row][col] == 'C')
		cnt++;
	if (data->map[row][col] == '1' || data->map[row][col] == 'V')
		return (0);
	if (cnt == data->coins && row == data->exit_x && col == data->exit_y)
		return (1);
	aux = data->map[row][col];
	data->map[row][col] = 'V';
	res = (check_path(data, row - 1, col, cnt)
			||check_path(data, row + 1, col, cnt)
			||check_path(data, row, col - 1, cnt)
			||check_path(data, row, col + 1, cnt));
	data->map[row][col] = aux;
	return (res);
}

void	do_checks(t_data *data)
{
	if (!check_rectangle(data))
		ft_error("The map is not rectangle\n", data);
	if (!check_closed(data))
		ft_error("The map is not closed\n", data);
	if (!check_elements(data, 1, 1))
		ft_error("The elements of this are not valid\n", data);
	if (!check_path(data, data->p_x, data->p_y, 0))
		ft_error("There is no escape\n", data);
}
