/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvial <marvin@42quebec.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:54:19 by gvial             #+#    #+#             */
/*   Updated: 2022/05/16 13:54:21 by gvial            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	read_file(char **result, int fd)
{
	char	*buff;
	int		byte_count;

	byte_count = 1;
	buff = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	while (!ft_strchr(*result, '\n'))
	{
		byte_count = read(fd, buff, BUFFER_SIZE);
		buff[byte_count] = '\0';
		*result = ft_strjoin(*result, buff);
	}
	free(buff);
}

static void	get_line(char *result, char **line)
{
	int	len;

	len = 0;
	while (result[len] != '\n' && result[len] != '\0')
		len++;
	*line = ft_substr(result, 0, len + 1, 0);
}

char	*get_next_line(int fd)
{
	static char	*result[OPEN_MAX];
	char		*line;

	line = NULL;
	read_file(&result[fd], fd);
	get_line(result[fd], &line);
	free(result[fd]); // still reachable if not freed at the last iteration
	return (line);
}
