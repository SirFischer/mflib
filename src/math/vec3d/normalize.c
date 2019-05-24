/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmartzol <hmartzol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 17:31:45 by hmartzol          #+#    #+#             */
/*   Updated: 2019/05/24 17:31:48 by hmartzol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mfmath.h>

t_vec3d	vec3d_normalize(t_vec3d v)
{
	double	m;

	m = 1.0 / sqrt(vec3d_dot(v, v));
	return ((t_vec3d){.x = v.x * m, .y = v.y * m, .z = v.z * m});
}
