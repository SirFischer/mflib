/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <kle-van-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 01:17:33 by kle-van-          #+#    #+#             */
/*   Updated: 2019/02/19 13:05:25 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_length(long long n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	if (n < 0)
	{
		size++;
		n = -n;
	}
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

static int	ft_negative(long long n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(long long n)
{
	long long			nbtmp;
	unsigned long long	nb;
	int					size;
	char				*new;

	nbtmp = n;
	size = ft_length(nbtmp);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	new[size] = '\0';
	nb = nbtmp;
	if (nbtmp < 0)
		nb = -nb;
	while (--size >= 0)
	{
		new[size] = (nb % 10) + '0';
		nb /= 10;
	}
	if (ft_negative(n))
		new[0] = '-';
	return (new);
}
