/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 07:17:22 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/09 07:24:37 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*temp;

	temp = dst;
	while (n > 0)
	{
		if (*src != '\0')
			*temp++ = *src++;
		else
			*temp++ = '\0';
		n--;
	}
	return (dst);
}
