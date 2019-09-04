/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:17:30 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/12 11:44:45 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlesize;
	char	*i;
	char	*j;

	needlesize = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while (len-- && *haystack)
	{
		if (*haystack == *needle)
		{
			needlesize = len;
			i = (char *)haystack + 1;
			j = (char *)needle + 1;
			while (needlesize-- && *i && *j && *i == *j)
			{
				++i;
				++j;
			}
			if (!*j)
				return ((char *)haystack);
		}
		haystack++;
	}
	return (NULL);
}
