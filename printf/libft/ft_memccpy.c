/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:30:53 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/07 09:54:43 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char			*tab;
	const unsigned char		*source;

	tab = dest;
	source = src;
	while (n--)
	{
		*tab++ = *source;
		if (*source++ == (unsigned char)c)
			return (tab);
	}
	return (NULL);
}
