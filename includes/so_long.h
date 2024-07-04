/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:26:25 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/04 17:27:44 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <X11/X.h>
# include <X11/keysym.h>
# include "../MLX42/include/MLX42/MLX42.h"
# include "../libft/libft.h"
# include "../get_next_line/get_next_line.h"
# include "../ft_printf/ft_printf.h"

typedef struct s_data
{
	mlx_t	*mlx;
	void	*win_ptr;
	char	**map;//Mapa
	int		width;
	int		height;
}	t_data;

int		main(int argc, char **argv);
void	read_map(char *path, t_data *data);

#endif