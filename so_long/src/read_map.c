/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 17:35:09 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/18 10:24:26 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

void	read_map(char *path, t_data *data)
{
	int		fd;
	char	*line;
	void	*dim;

	fd = open(path, O_RDONLY);
	dim = NULL;
	line = get_next_line(fd);
	while (line != NULL)
	{
		dim = ft_strjoin(dim, line);
		line = get_next_line(fd);
		data->height++;
	}
	data->map = ft_split(dim, '\n');
	data->width = ft_strlen(data->map[0]);
	do_checks(data);
	close(fd);
}
