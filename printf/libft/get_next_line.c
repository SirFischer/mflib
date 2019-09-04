/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/15 08:57:26 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/21 10:39:17 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_strnjoin(const char *s1, const char *s2, size_t len)
{
	char			*new;
	int				size;
	char			*address;

	size = ft_strlen(s1) + (len + 1);
	if (!(new = ft_strnew(size)))
		return (NULL);
	address = new;
	while (*s1)
		*new++ = *s1++;
	while (*s2 && len--)
		*new++ = *s2++;
	*new = '\0';
	return (address);
}

static char		*ft_add_buffer(char *dst, char *buf, int size)
{
	char			*erase;

	erase = dst;
	dst = ft_strnjoin(dst, buf, size);
	free(erase);
	return (dst);
}

static t_list	*ft_tracklist(t_list **list, int fd)
{
	t_list			*current;

	if (!list)
		return (NULL);
	current = *list;
	if (current)
	{
		while (current)
		{
			if ((int)current->content_size == fd)
				return (current);
			current = current->next;
		}
	}
	if (!(current = ft_lstnew("\0", 1)))
		return (NULL);
	current->content_size = fd;
	ft_lstadd(list, current);
	return (current);
}

static int		ft_cut_content(void **dst, int size)
{
	char	*erase;

	erase = *dst;
	if (!(*dst = ft_strdup(*dst + size)))
		return (-1);
	free(erase);
	if (size > 0)
		return (1);
	return (0);
}

int				get_next_line(const int fd, char **line)
{
	static t_list	*tracklist = NULL;
	t_list			*list;
	char			buf[BUFF_SIZE + 1];
	int				size;

	if (fd < 0 || BUFF_SIZE <= 0 || !line || read(fd, buf, 0) < 0)
		return (-1);
	if (!(list = ft_tracklist(&tracklist, fd)))
		return (-1);
	while (!(ft_strchr(list->content, '\n')) &&
										(size = read(fd, buf, BUFF_SIZE)) > 0)
		if (!(list->content = ft_add_buffer(list->content, buf, size)))
			return (-1);
	size = 0;
	while (((char *)list->content)[size] &&
										((char *)list->content)[size] != '\n')
		size++;
	if (!(*line = ft_strsub(list->content, 0, size)))
		return (-1);
	if (((char *)list->content)[size] == '\n')
		size++;
	return (ft_cut_content(&list->content, size));
}
