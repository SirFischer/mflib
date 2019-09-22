/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matdmatf.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:21:59 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/22 20:23:29 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

t_mat4f			mat4d_to_mat4f(t_mat4d mat)
{
	t_mat4f		res;

	res.v[0] = vec4d_to_vec4f(mat.v[0]);
	res.v[1] = vec4d_to_vec4f(mat.v[1]);
	res.v[2] = vec4d_to_vec4f(mat.v[2]);
	res.v[3] = vec4d_to_vec4f(mat.v[3]);
	return (res);
}

t_mat3f			mat3d_to_mat3f(t_mat3d mat)
{
	t_mat3f		res;

	res.v[0] = vec3d_to_vec3f(mat.v[0]);
	res.v[1] = vec3d_to_vec3f(mat.v[1]);
	res.v[2] = vec3d_to_vec3f(mat.v[2]);
	return (res);
}

t_mat2f			mat2d_to_mat2f(t_mat2d mat)
{
	t_mat2f		res;

	res.v[0] = vec2d_to_vec2f(mat.v[0]);
	res.v[1] = vec2d_to_vec2f(mat.v[1]);
	return (res);
}