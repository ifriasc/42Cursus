/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:47:24 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/03/22 13:45:02 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_bytes(int fd, char *partial)
{
	int		nbytes;
	char	*buffer;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (NULL);
	nbytes = 1;
	while (!ft_strchr(partial, '\n') && nbytes != 0)
	{
		nbytes = read(fd, buffer, BUFFER_SIZE);
		if (nbytes == -1)
		{
			free(partial);
			free(buffer);
			partial = NULL;
			return (NULL);
		}
		buffer[nbytes] = '\0';
		partial = ft_strjoin(partial, buffer);
	}
	free(buffer);
	if (ft_strlen(partial) == 0)
		return (free(partial), NULL);
	return (partial);
}

char	*ft_build_line(char *partial)
{
	int		i;
	char	*line;

	i = 0;
	while (partial[i] != '\n' && partial[i] != '\0')
		i++;
	line = (char *)malloc((i + 2) * sizeof(char));
	if (!line)
		return (NULL);
	i = 0;
	while (partial[i] != '\0' && partial[i] != '\n')
	{
		line[i] = partial[i];
		i++;
	}
	if (partial[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

char	*ft_clean_line(char *partial)
{
	int		i;
	int		n;
	char	*new_buff;

	i = 0;
	while (partial[i] != '\n' && partial[i] != '\0')
		i++;
	n = ft_strlen(partial) - (i + 1);
	if (n <= 0)
	{
		free(partial);
		partial = NULL;
		return (NULL);
	}
	i++;
	new_buff = ft_strndup(partial + i, n);
	free(partial);
	partial = NULL;
	return (new_buff);
}

char	*get_next_line(int fd)
{
	static char	*partial;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		free(partial);
		partial = NULL;
		return (NULL);
	}
	partial = ft_read_bytes(fd, partial);
	if (!partial)
		return (NULL);
	line = ft_build_line(partial);
	partial = ft_clean_line(partial);
	return (line);
}
