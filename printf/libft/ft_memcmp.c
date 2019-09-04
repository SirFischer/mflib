/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 10:57:31 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/07 11:18:46 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*cmp1;
	const unsigned char	*cmp2;

	cmp1 = s1;
	cmp2 = s2;
	while (n--)
	{
		if (*cmp1 != *cmp2)
			return (*cmp1 - *cmp2);
		cmp1++;
		cmp2++;
	}
	return (0);
}
