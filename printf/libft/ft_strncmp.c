/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 09:57:09 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/09 10:04:59 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((unsigned char)*s1 == (unsigned char)*s2 && n--)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	if (n == 0)
	{
		s1--;
		s2--;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
