/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 11:42:26 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/13 14:06:37 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

float		ft_recursivepower(int nb, int pow)
{
	float		result;

	if (pow == 0)
		return (1);
	result = ft_recursivepower(nb, pow / 2);
	if (pow % 2 == 0)
		return (result * result);
	else
	{
		if (pow > 0)
			return (nb * result * result);
		else
			return (result * result) / nb;
	}
}
