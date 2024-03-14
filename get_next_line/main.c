/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:42:55 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/02/23 17:21:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	main(void)
{
	char *funcion1 = " " ;
	//char *funcion2 = NULL;
	//char *funcion3 = NULL;
	int fd;


	fd = open("1char.txt", O_RDONLY);
	funcion1 = ft_read_bytes(fd, funcion1);
	printf("Primera función:%s\n", funcion1);
	funcion1 = ft_build_line(funcion1);
	printf("Segunda función:%s\n", funcion1);
	funcion1 = ft_clean_line(funcion1);
	printf("Tercera función:%s\n", funcion1);
	/*funcion2 = ft_build_line("Hola\nBesugo");
	printf("Segunda función, prueba 1: %s", funcion2);
	funcion2 = ft_build_line("0\n");
	printf("Segunda función, prueba 2: %s", funcion2);
	funcion3 = ft_clean_line("Hola\nBesugo");
	printf("Tercera función, prueba 1: %s \n", funcion3);
	funcion3 = ft_clean_line("0\n ");
	printf("Tercera función, prueba 2: %s \n", funcion3);]*/
	close(fd);
	
	/*fd = open("text", O_RDONLY);
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
	printf("5. %s", line);*/
}