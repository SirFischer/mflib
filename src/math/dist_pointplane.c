/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dist_pointplane.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:39:30 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/11 16:34:36 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

double		dist_pointplane(double plane_n[3], double plane_p[3], double point[3])
{
	double tmp[3];
	vec3vec3_substract(point, plane_p, tmp);
	return (vec3_dot(tmp, plane_n));
}
