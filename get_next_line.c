/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:21:07 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/20 02:52:00 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	size_t		bytes_read;
	char		*line;

	if (BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (bytes_read <= 0)
		return (NULL);
	while (fd >= 0 && BUFFER_SIZE > 0)
	{
		line = strjoin(line, buffer);
	}
	return (NULL);
}

int main()
{
	int fdnum = open("txt.txt", O_RDONLY); 
	get_next_line(fdnum);
	return 0;
}
