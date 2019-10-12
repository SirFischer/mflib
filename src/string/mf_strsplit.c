/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mf_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 17:45:21 by mfischer          #+#    #+#             */
/*   Updated: 2019/10/12 18:22:00 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfstring.h"
#include "mfmemory.h"

static unsigned int	count_words(const char *s, char c)
{
	unsigned int	count;

	count = 0;
	while (s && *s)
	{
		while (*s && *s != c)
			s++;
		count++;
		if (*s)
			s++;
	}
	return (count);
}

static char		**handle_error(char **list)
{
	while (list && *list)
		free(*list++);
	free(list);
	return (NULL);
}

char		**mf_strsplit(const char *s, char c)
{
	char			**list;
	char			**tmp;
	char			*del;
	unsigned int	words;

	words = count_words(s, c);
	if (!s || !(list = (char **)mf_memalloc(sizeof(char *) * (words + 1))))
		return (NULL);
	tmp = list;
	while (words-- > 0)
	{
		if ((del = mf_strchr(s, c)))
			*del = '\0';
		if (!(*tmp = mf_strdup(s)))
			return (handle_error(list));
		if (del)
			s = del + 1;
		tmp++;
	}
	return (list);
}