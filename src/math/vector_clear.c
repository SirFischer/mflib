/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:33:00 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/04 22:28:25 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/math.h"

void		vec4_clear(double vec[4])
{
	vec[0] = 0;
	vec[1] = 0;
	vec[2] = 0;
	vec[3] = 0;
}

void		vec3_clear(double vec[3])
{
	vec[0] = 0;
	vec[1] = 0;
	vec[2] = 0;
}

void		vec2_clear(double vec[2])
{
	vec[0] = 0;
	vec[1] = 0;
}
