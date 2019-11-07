/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:03:27 by mfischer          #+#    #+#             */
/*   Updated: 2019/11/07 15:12:35 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mffiles.h"
#include "mfstring.h"
#include "mflist.h"

t_fd_buff			*get_fd_buff(t_list2 **list, const int fd)
{
	t_node		*head;
	t_fd_buff	*new;

	if (!*list)
		if (!(*list = list2_create()))
			return (NULL);
	head = (*list)->list;
	while (head && head->next)
	{
		if (((t_fd_buff *)head->data)->fd == fd)
			return (head->data);
		head = head->next;
	}
	if (!(new = (t_fd_buff *)malloc(sizeof(t_fd_buff))))
		return (NULL);
	if (!(list2_push(*list, new)))
	{
		free(new);
		return (NULL);
	}
	new->fd = fd;
	new->buff = NULL;
	return (new);
}

int					get_next_line(const int fd, char **line)
{
	static t_list2	*list = NULL;
	t_fd_buff		*fd_buff;
	char			buffer[BUFF_SIZE + 1];
	char			*tmp;
	char			*newline;

	fd_buff = NULL;
	if (!line || read(fd, fd_buff, 0) == -1 || !(fd_buff = get_fd_buff(&list, fd)))
		return (-1);
	while (!(newline = mf_strchr(fd_buff->buff, '\n')) && read(fd, buffer, BUFF_SIZE))
	{
		buffer[BUFF_SIZE] = '\0';
		tmp = fd_buff->buff;
		if (!(fd_buff->buff = mf_strjoin(fd_buff->buff, buffer)))
		{
			free(buffer);
			fd_buff->buff = tmp;
			return (-1);
		}
		if (tmp)
			free(tmp);
	}
	*line = fd_buff->buff;
	if (!newline)
		return (0);
	fd_buff->buff = mf_strsub(newline, 1, BUFF_SIZE);
	*newline = '\0';
	return (1);
}
