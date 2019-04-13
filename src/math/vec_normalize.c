/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_normalize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 17:51:18 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/13 14:52:35 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void			vec4_normalize(double vector[4], double result[4])
{
	double	mag;
	int		i;

	mag = vec4_magnitude(vector);
	i = -1;
	while (++i < 4)
		result[i] = vector[i] / mag;
}

void			vec3_normalize(double vector[3], double result[3])
{
	double	mag;
	int		i;

	mag = vec3_magnitude(vector);
	i = -1;
	while (++i < 3)
		result[i] = vector[i] / mag;
}

void			vec2_normalize(double vector[2], double result[2])
{
	double	mag;
	int		i;

	mag = vec2_magnitude(vector);
	i = -1;
	while (++i < 2)
		result[i] = vector[i] / mag;
}
