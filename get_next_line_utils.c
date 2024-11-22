/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: duandrad <duandrad@student.42lisboa>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 16:57:50 by duandrad          #+#    #+#             */
/*   Updated: 2024/11/19 17:01:59 by duandrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* compile with cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 <files>.c
--> undefined behaviour: if the file pointed by the fd changed since last call and read() didnt reach end of file
--> undefined behaviour: when reading binary file
lseek() is forbidden
global variables are forbidden */

#include "get_next_line.h"

size_t	ft_strlen_delm(const char *str, char delm)
{
	size_t	len;

	len = 0;
	if (!str)
		return (len);
	while (str[len] && str[len] != delm)
		len++;
	if (str[len] == '\n')
		len++;
	return (len);
}

char	*ft_strjoin_gnl(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*new;

	new = (char *)malloc(ft_strlen_delm(s1, 0) + ft_strlen_delm(s2, '\n') + 1);
	if (!new)
		return (NULL);
	i = 0;
	j = 0;
	while (s1 &&s1[i])
		new[j++] = s1[i++];
	i = 0;
	while (s2 && s2[i])
		new[j++] = s2[i++];
	new[j] = '\0';
	return (new);
}
