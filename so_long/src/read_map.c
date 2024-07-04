/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:35:09 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/04 18:49:08 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	
void	read_map(char *path, t_data *data)
{
	int		fd;
	char	*line;
	char	*dim;

	fd = open(path, O_RDONLY);

	line = get_next_line(fd);
	dim = NULL;//si no falla strjoin
	while (line)
	{
		dim = ft_strjoin(dim, line);
		line = get_next_line(fd);
	}
	data->map = ft_split(dim, '\n');

	check_rectangle(data);
	check_closed(data);
	check_isvalid(data);
	close(fd);
}
//Comprobar ahora el mapa