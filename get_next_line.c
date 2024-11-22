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
	size_t		i;

	line = NULL;
	if (BUFFER_SIZE <= 0)
		return (NULL);
	bytes_read = read(fd, buffer, BUFFER_SIZE);
	i = 0;
	while (i < bytes_read && fd >= 0 && BUFFER_SIZE > 0 && bytes_read > 0 )
	{
		if (buffer[i] != '\n');
			line[i++] = buffer[i++];
		//line = ft_strjoin(line, buffer);
	}
	buffer[bytes_read] = '\0';
	return (line);
}

int main()
{
	int fdnum = open("txt.txt", O_RDONLY); 
	char *str = get_next_line(fdnum);
	printf("%s", str);
	return 0;
}
