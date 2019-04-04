/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 22:46:09 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/04 22:43:06 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mymath.h"

void		vec4_init(double vec[4])
{
	vec[0] = 0;
	vec[1] = 0;
	vec[2] = 0;
	vec[3] = 1;
}

void		vec3_init(double vec[3])
{
	vec[0] = 0;
	vec[1] = 0;
	vec[2] = 1;
}

void		vec2_init(double vec[2])
{
	vec[0] = 0;
	vec[1] = 0;
}
