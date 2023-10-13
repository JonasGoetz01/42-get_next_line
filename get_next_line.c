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
	while (es existiert kein /n in temp && read_status != 0)
	{
		read von fd nach temp mit BUFFER_SIZE
		wenn fehler
			free file_content
			free temp
			return 
		am ende temp nullterminieren

		wenn anzahl der eingelesenen character nicht 0
			temp mit in file_content
		
		tmp freen

		ret = neuer string mit content von file_content bis /n oder /0

		file_content pointer eine zeile weiter schieben

		ret returnen
	}
}
