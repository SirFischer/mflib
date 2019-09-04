/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 08:57:08 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/09 09:15:06 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	size;

	if (*needle == '\0' || !needle)
		return ((char *)haystack);
	size = ft_strlen(needle);
	while (*haystack)
	{
		if (ft_strncmp(haystack, needle, size) == 0)
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
