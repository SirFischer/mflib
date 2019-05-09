/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_normalize_s.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/09 16:36:01 by mfischer          #+#    #+#             */
/*   Updated: 2019/05/09 16:38:16 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void			vec4_normalize_s(double vector[4])
{
	double	mag;
	int		i;

	mag = vec4_magnitude(vector);
	i = -1;
	while (++i < 4)
		vector[i] /= mag;
}

void			vec3_normalize_s(double vector[3])
{
	double	mag;
	int		i;

	mag = vec3_magnitude(vector);
	i = -1;
	while (++i < 3)
		vector[i] /= mag;
}

void			vec2_normalize_s(double vector[2])
{
	double	mag;
	int		i;

	mag = vec2_magnitude(vector);
	i = -1;
	while (++i < 2)
		vector[i] /= mag;
}