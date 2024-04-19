/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samcasti <samcasti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:10:02 by samcasti          #+#    #+#             */
/*   Updated: 2024/04/19 17:59:01 by samcasti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	ft_display_file(char *filename)
{
	int		fd;
	int		bytes_read;
	char	buffer[BUFFER_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (1);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (1);
	while (bytes_read > 0)
	{
		write(1, buffer, bytes_read);
		buffer[bytes_read] = '\0';
		bytes_read = read(fd, buffer, BUFFER_SIZE);
	}
	buffer[bytes_read] = '\0';
	bytes_read = close(fd);
	if (bytes_read < 0)
		return (1);
	return (0);
}
