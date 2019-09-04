/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 00:56:23 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/13 14:33:52 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbwords(char *s, char c)
{
	int		i;
	int		ok;

	i = 0;
	ok = 0;
	while (*s)
	{
		if (!ok && *s != c)
		{
			ok = 1;
			i++;
		}
		else if (ok && *s == c)
			ok = 0;
		s++;
	}
	return (i);
}

static int	ft_length(char *s, char c)
{
	int		size;

	size = 0;
	while (*s != c && *s)
	{
		size++;
		s++;
	}
	return (size);
}

char		**ft_strsplit(char const *s, char c)
{
	int		words;
	char	**tab;
	int		i;

	if (!s)
		return (NULL);
	i = 0;
	words = ft_nbwords((char *)s, c);
	tab = (char **)malloc(sizeof(char *) * (words + 1));
	if (!tab)
		return (NULL);
	while (words--)
	{
		while (*s == c && *s)
			s++;
		tab[i] = ft_strsub((char *)s, 0, ft_length((char *)s, c));
		if (!tab[i])
			return (NULL);
		s = s + ft_length((char *)s, c);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
