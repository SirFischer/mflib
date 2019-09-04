/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 09:52:56 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/13 11:22:20 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tempdest;
	char	*tempsrc;

	tempdest = (char *)dest;
	tempsrc = (char *)src;
	if (dest < src)
		ft_strncpy(dest, src, n);
	else
		while (n-- > 0)
			tempdest[n] = tempsrc[n];
	return (dest);
}
