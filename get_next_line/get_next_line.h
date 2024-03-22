/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:43:26 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/03/22 13:20:18 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_clean_line(char *partial);
char	*ft_build_line(char *partial);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_read_bytes(int fd, char *partial);
int		ft_strlen(const char *str);
char	*ft_strchr(char *s, int c);
char	*ft_strndup(char *s, int n);

#endif