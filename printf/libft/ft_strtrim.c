/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 00:05:55 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/12 00:15:54 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	int				j;

	if (!s)
		return (NULL);
	i = 0;
	j = (int)ft_strlen(s) - 1;
	while ((s[i] == ' ' || s[i] == '\t' || s[i] == '\n') && s[i])
		i++;
	while ((s[j] == ' ' || s[j] == '\t' || s[j] == '\n') && s[i] &&
			((int)i < j))
		j--;
	return (ft_strsub(s, i, (j - (int)i + 1)));
}
