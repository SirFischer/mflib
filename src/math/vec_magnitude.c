/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_magnitude.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 17:38:55 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/04 22:42:45 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mymath.h"

double			vec4_magnitude(double vector[4])
{
	return (sqrt((vector[0] * vector[0]) + (vector[1] * vector[1]) + (vector[2]
	* vector[2]) + (vector[3] * vector[3])));
}

double			vec3_magnitude(double vector[3])
{
	return (sqrt((vector[0] * vector[0]) + (vector[1] * vector[1]) + (vector[2]
	* vector[2])));
}

double			vec2_magnitude(double vector[2])
{
	return (sqrt((vector[0] * vector[0]) + (vector[1] * vector[1])));
}
