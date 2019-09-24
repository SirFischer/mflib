/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mf_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 01:20:41 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/25 01:23:28 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "mfstring.h"

char	*mf_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*htemp;
	char	*ntemp;
	size_t	count;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len--)
	{
		count = len + 1;
		htemp = (char *)haystack;
		ntemp = (char *)needle;
		while (*haystack++ == *needle++ && count--)
			if (*needle == '\0')
				return (htemp);
		if (htemp != haystack)
		{
			haystack = htemp;
			needle = ntemp;
		}
		haystack++;
	}
	return (NULL);
}
