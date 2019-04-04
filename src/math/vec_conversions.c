/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_conversions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:44:18 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/04 22:27:31 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/math.h"

void	vec3vec4_convert(double vec[3], double res[4])
{
	vec4_init(res);
	res[0] = vec[0];
	res[1] = vec[1];
	res[2] = vec[2];
}
