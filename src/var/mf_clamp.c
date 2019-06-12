/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mf_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 23:42:34 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/12 23:51:56 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "var.h"

int		mf_clamp_int(int value, int min, int max)
{
	if (value < min)
		return (min);
	if (value > max)
		return (max);
	return (value);
}

double	mf_clamp_double(double value, double min, double max)
{
	if (value < min)
		return (min);
	if (value > max)
		return (max);
	return (value);
}