/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_conversions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 18:44:18 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/13 14:52:07 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void	vec3vec4_convert(double vec[3], double res[4])
{
	vec4_init(res);
	res[0] = vec[0];
	res[1] = vec[1];
	res[2] = vec[2];
}
