/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:35:09 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/04 19:08:55 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	check_rectangle(t_data *data)
{
	size_t	len;
	int		i;

	if (data->height < 2 || data->width < 2)
	{
		ft_printf("Error\n");
		ft_printf("The map is not rectangle\n");
		return (0);
	}
	else
	{
		i = 1;
		len = ft_strlen(data->map[0]);
		while (i < data->height)
		{
			if (ft_strlen(data->map[i]) != len)
			{
				ft_error('1');
				return (0);
			}
			i++;
		}
	}
	return (1);
}

int check_closed(t_data *data)
{
	int	i;
	int j;

	j = 0;
	while(j < data->width)
	{
		if(data->map[0][j] != '1' && data->map[data->height - 1][j] != '1')
		{
			ft_error('2');
			return (0);
		}
		j++;
	}

	i = 1;
	while(i < data->height){
		if(data->map[i][0] != '1')
		{
			ft_error('2');
			return(0);
		}
		i++;
	}

	return (1);
}

int	check_isvalid(t_data *data)
{

}

void	read_map(char *path, t_data *data)
{
	int		fd;
	char	*line;
	char	*dim;

	fd = open(path, O_RDONLY);

	line = get_next_line(fd);
	dim = NULL;//si no falla strjoin
	data->height = 0;
	while (line)
	{
		dim = ft_strjoin(dim, line);
		line = get_next_line(fd);
		data->height++;
	}
	data->map = ft_split(dim, '\n');
	data->width = ft_strlen(data->map[0]);
	
	check_rectangle(data);
	check_closed(data);
	check_elements(data);
	check_isvalid(data);
	close(fd);
}
//Comprobar ahora el mapa