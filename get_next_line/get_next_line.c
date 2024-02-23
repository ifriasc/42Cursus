/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ifrias-c <ifrias-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 12:47:24 by ifrias-c          #+#    #+#             */
/*   Updated: 2024/02/19 19:16:00 by ifrias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_read_bytes(int fd, char *partial)
{
	int		nbytes;
	char	*buffer;
	int		i;

	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	i = 0;
	nbytes = 1;
	while (ft_strchr(partial, '\n') == NULL && nbytes != 0)
	{
		nbytes = read(fd, buffer, BUFFER_SIZE);
		if (nbytes < 0)
		{
			free(buffer);
			return (NULL);
		}
		partial = ft_strjoin(partial, buffer); //strdup(buffer); concateno aqui??
		i++;
	}
	free(buffer);
	return (partial);
}

char	*ft_build_line(char *partial) //donde concateno?
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	while (partial[i] != '\n')
		i++;
	line = (char *)malloc((ft_strlen(partial) - i) * sizeof(char));
	if (!line)
		return (NULL);
	j = 0;
	i++;
	while (j < i)
	{
		line[j] = partial[j];
		j++;
	}
	line[j] = '\0';
	return (line);
}

char	*ft_clean_line(char *partial)
{
	int		i;
	int		j;
	char	*new_buff;

	i = 0;
	while (partial[i] != '\n')
		i++;
	new_buff = (char *)malloc((ft_strlen(partial) - i + 1) * sizeof(char));
	if (partial[i] == '\0' || !new_buff)
		return (NULL);
	j = 0;
	while (partial[i++] != '\0')
	{
		new_buff[j] = partial[i];
		j++;
	}
	new_buff[j] = '\0';
	free(partial);
	return (new_buff);
}

char	*get_next_line(int fd)
{
	static char	*partial;
	char		*line;

	if (fd < 0 || read(fd, 0, 0) < 0)
	{
		free(partial);
		return (NULL);
	}
	partial = ft_read_bytes(fd, partial);
	line = ft_build_line(partial);
	partial = ft_clean_line(partial);
	return (line);
}
