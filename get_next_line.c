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
	int			bytes_read;
	int			i;

	bytes_read = read(fd, buffer, BUFFER_SIZE);
	buffer[bytes_read] = '\0';
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		write(1, &buffer[i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (NULL);
}

int main()
{
	int fdnum = open("txt.txt", O_RDONLY); 
	get_next_line(fdnum);
	return 0;
}