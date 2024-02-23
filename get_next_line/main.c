/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:42:55 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/02/23 16:57:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
//#include <stdio.h>

int	main(void)
{
	char *funcion1 = NULL;
	char *funcion2 = NULL;
	//char *funcion3 = NULL;
	int fd;

	fd = open("text", O_RDONLY);
	funcion1 = ft_read_bytes(fd, funcion1);
	printf("Primera función: %s \n", funcion1);
	funcion2 = ft_build_line("Hola\nBesugo");
	printf("Segunda función: %s \n", funcion2);
	//funcion3 = ft_clean_line("Hola\nBesugo");
	//printf("Tercera función: %s \n", funcion3);
	close(fd);
	
	fd = open("text", O_RDONLY);
	char *line = NULL;
	line = get_next_line(fd);
	printf("1. %s", line);
	line = get_next_line(fd);
	printf("2. %s", line);
	line = get_next_line(fd);
	printf("3. %s", line);
	line = get_next_line(fd);
	printf("4. %s", line);
	line = get_next_line(fd);
	printf("5. %s", line);
}