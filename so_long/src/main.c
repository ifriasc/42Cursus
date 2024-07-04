/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 11:29:36 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/07/04 17:16:19 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

int	main(int argc, char **argv)
{
	t_data	*data;

	if (argc != 2)
		printf("%s", "Error\n");//poner el ft_printf tuyo
	data = malloc(sizeof(t_data));
	read_map(argv[1], data);//el argumento 1 es el mapa

}
