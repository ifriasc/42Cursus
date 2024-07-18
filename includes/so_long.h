/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 12:26:25 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/18 13:22:01 by ifrias-c         ###   ########.fr       */
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

#define ESC     53
#define W       13
#define A	    0
#define S	    1
#define D	    2

typedef struct s_data
{
	mlx_t			*mlx;

	char			**map;
	int				width;
	int				height;

	int				coins;

	int				exit;
	int				exit_x;
	int				exit_y;

	int				player;
	int				p_x;
	int				p_y;
	int				moves;
	int				picked;

	mlx_texture_t	*texture[5];
	mlx_image_t 	*img[5];

}	t_data;

int		main(int argc, char **argv);
void	check_args(int argc, char **argv, t_data *data);
void	read_map(char *path, t_data *data);
int		check_rectangle(t_data *data);
int		check_closed(t_data *data);
int		check_elements(t_data *data, int i, int j);
int		check_path(t_data *data, int row, int col, int cnt);
void	ft_error(char *error, t_data *data);
void	load_map(t_data *data);
void	do_checks(t_data *data);
void	init_struct(t_data *data);
void	load_textures(t_data *data);
void	load_images(t_data *data);
void    controller(mlx_key_data_t key, void *data);
void	move_up(t_data *data);

#endif