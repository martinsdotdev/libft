/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:02:10 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/25 17:59:36 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdbool.h>
#include <stddef.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 128
#endif

/**
 * @brief Returns a line from the file descriptor `fd`.
 *
 * Repeated calls to this function reads the text file pointed to by the file
 * descriptor, one line at a time.
 *
 * @note The returned line does not include the terminating newline ('\n')
 * character.
 *
 * @param fd The file descriptor to read from.
 * @return The line read. NULL if there is nothing else to read or if an error
 * occured.
 */
char	*get_next_line(int fd)
{
	static char		buffer[BUFFER_SIZE + 1] = {0};
	static size_t	position = 0;
	ssize_t			bytes_read;
	size_t			len;
	t_string		line;

	if (BUFFER_SIZE <= 0 || fd == -1 || read(fd, buffer, 0) == -1)
		return (NULL);
	line = ft_stnnew_empty();
	if (!line)
		return (NULL);
	while (true)
	{
		if (position == 0)
		{
			bytes_read = read(fd, buffer, BUFFER_SIZE);
			if (bytes_read <= 0)
				return (ft_stnfree(line), NULL);
			buffer[bytes_read] = '\0';
		}
		len = ft_strcspn(buffer + position, "\n");
		line = ft_stncat_size(line, buffer + position, len);
		if (!line)
			return (ft_stnfree(line), NULL);
		position += len;
		if (buffer[position] == '\n')
		{
			line = ft_stncat_size(line, "\n", sizeof(char));
			if (!line)
				return (ft_stnfree(line), NULL);
			position++;
			break ;
		}
		position = 0;
	}
	return (line);
}
