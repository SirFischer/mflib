/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mf_strstrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 19:27:30 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/23 19:28:41 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfstring.h"

char	*mf_strstrchr(const char *haystack, const char *needle, char c)
{
	char *htemp;
	char *ntemp;

	htemp = NULL;
	ntemp = NULL;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && *haystack != c)
	{
		htemp = (char *)haystack;
		ntemp = (char *)needle;
		while (*haystack++ == *needle++)
		{
			if (*needle == '\0')
				return (htemp);
		}
		if (htemp != haystack)
		{
			haystack = htemp;
			needle = ntemp;
		}
		haystack++;
	}
	return (NULL);
}