/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vecfvecd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 01:36:22 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/16 01:43:41 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

t_vec4d		vec4f_to_vec4d(t_vec4f vec)
{
	return ((t_vec4d){.a = {vec.n.x, vec.n.y, vec.n.z, vec.n.w}});
}

t_vec3d		vec3f_to_vec3d(t_vec3f vec)
{
	return ((t_vec3d){.a = {vec.n.x, vec.n.y, vec.n.z}});
}

t_vec2d		vec2f_to_vec2d(t_vec2f vec)
{
	return ((t_vec2d){.a = {vec.n.x, vec.n.y}});
}
