/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_dot.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/30 13:41:00 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/04 22:27:49 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/math.h"

double			vec4_dot(double vec[4], double vec2[4])
{
	double	res;
	int		i;

	i = -1;
	res = 0;
	while (++i < 4)
		res += vec[i] * vec2[i];
	return (res);
}

double			vec3_dot(double vec[3], double vec2[3])
{
	double	res;
	int		i;

	i = -1;
	res = 0;
	while (++i < 3)
		res += vec[i] * vec2[i];
	return (res);
}

double			vec2_dot(double vec[2], double vec2[2])
{
	double	res;
	int		i;

	i = -1;
	res = 0;
	while (++i < 2)
		res += vec[i] * vec2[i];
	return (res);
}
