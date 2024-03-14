/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:43:26 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/03/14 13:10:26 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
//# define BUFFER_SIZE 42

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
char	*ft_strdup(const char *s, int n);
void	*ft_memcpy(void *dst, const void *src, ssize_t n);

#endif