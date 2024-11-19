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

// compile with cc -Wall -Werror -Wextra -D BUFFER_SIZE=42 <files>.c
// --> undefined behaviour: if the file pointed by the fd changed since last call and read() didnt reach end of file
// --> undefined behaviour: when reading binary file
// lseek() is forbidden
// global variables are forbidden
