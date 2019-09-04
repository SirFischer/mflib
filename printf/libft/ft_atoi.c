/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 10:07:40 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/12 10:25:51 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	long long int	result;
	long long int	positive;

	result = 0;
	positive = 1;
	while (*str == '\n' || *str == '\t' || *str == '\v' || *str == ' '
				|| *str == '\f' || *str == '\r')
		str++;
	if (*str == '-')
		positive = (-1);
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result *= 10;
		result += (*str - '0');
		str++;
	}
	return (positive * result);
}
