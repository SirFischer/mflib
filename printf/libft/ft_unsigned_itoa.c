/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <kle-van-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 12:27:55 by kle-van-          #+#    #+#             */
/*   Updated: 2019/02/19 12:38:29 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned long long	ft_length(unsigned long long n)
{
	int	size;

	if (n == 0)
		return (1);
	size = 0;
	while (n)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char						*ft_unsigned_itoa(unsigned long long n)
{
	unsigned long long	nb;
	int					size;
	char				*new;

	nb = n;
	size = ft_length(nb);
	new = (char *)malloc(sizeof(char) * (size + 1));
	if (!new)
		return (NULL);
	new[size] = '\0';
	while (--size >= 0)
	{
		new[size] = (nb % 10) + '0';
		nb /= 10;
	}
	return (new);
}
