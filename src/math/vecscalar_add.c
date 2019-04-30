/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vecscalar_add.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/30 18:06:46 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/30 18:07:58 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void	vec4scalar_add(double vec[4], double scalar, double res[4])
{
	res[0] = vec[0] + scalar;
	res[1] = vec[1] + scalar;
	res[2] = vec[2] + scalar;
	res[3] = vec[3] + scalar;
}

void	vec3scalar_add(double vec[3], double scalar, double res[3])
{
	res[0] = vec[0] + scalar;
	res[1] = vec[1] + scalar;
	res[2] = vec[2] + scalar;
}

void	vec2scalar_add(double vec[2], double scalar, double res[2])
{
	res[0] = vec[0] + scalar;
	res[1] = vec[1] + scalar;
}