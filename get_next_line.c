/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgotz <jgotz@student.42heilbronn.de>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 11:17:34 by jgotz             #+#    #+#             */
/*   Updated: 2023/10/13 14:23:16 by jgotz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*file_content;
	int			read_status;
	char		*tmp;
	char		*ret;

	read_status = 1;
	tmp = malloc(BUFFER_SIZE + 1);
	while ((ft_strchr(tmp, '\n') == NULL) && read_status != 0)
	{
		read_status = read(fd, tmp, BUFFER_SIZE);
		if (read_status == -1)
		{
			free(file_content);
			free(tmp);
			return (NULL);
		}
		tmp[read_status] = '\0';
		if (read_status != 0)
			file_content = ft_strjoin(file_content, tmp);
	}
	free(tmp);
	ret = ft_substr(file_content, 0, len_til_end(file_content));
	file_content = ft_substr(file_content,
			len_til_end(file_content), ft_strlen(file_content));
	return (ret);
}
