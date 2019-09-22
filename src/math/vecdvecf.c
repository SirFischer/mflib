/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vecdvecf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 01:36:22 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/16 01:49:19 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

t_vec4f		vec4d_to_vec4f(t_vec4d vec)
{
	return ((t_vec4f){.a = {vec.n.x, vec.n.y, vec.n.z, vec.n.w}});
}

t_vec3f		vec3d_to_vec3f(t_vec3d vec)
{
	return ((t_vec3f){.a = {vec.n.x, vec.n.y, vec.n.z}});
}

t_vec2f		vec2d_to_vec2f(t_vec2d vec)
{
	return ((t_vec2f){.a = {vec.n.x, vec.n.y}});
}
