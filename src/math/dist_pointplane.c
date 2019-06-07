/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dist_pointplane.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:39:30 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/07 13:44:12 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

double		dist_pointplane(double plane_n[3], double plane_p[3], double point[3])
{
	return (vec3_dot(plane_n, point) - vec3_dot(plane_n, plane_p));
}