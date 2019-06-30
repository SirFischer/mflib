/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_get_normal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/30 21:52:27 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/30 22:07:18 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void		vec3p_get_normal(double p1[3], double p2[3], double p3[3], double res[3])
{
	double tmp1[3];
	double tmp2[3];

	vec3vec3_substract(p2, p1, tmp1);
	vec3vec3_substract(p3, p1, tmp2);
	vec3vec3_crossproduct(tmp1, tmp2, res);
	vec3_normalize_s(res);
}
