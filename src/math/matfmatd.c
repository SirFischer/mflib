/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matfmatd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 20:18:42 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/22 20:21:49 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

t_mat4d			mat4f_to_mat4d(t_mat4f mat)
{
	t_mat4d		res;

	res.v[0] = vec4f_to_vec4d(mat.v[0]);
	res.v[1] = vec4f_to_vec4d(mat.v[1]);
	res.v[2] = vec4f_to_vec4d(mat.v[2]);
	res.v[3] = vec4f_to_vec4d(mat.v[3]);
	return (res);
}

t_mat3d			mat3f_to_mat3d(t_mat3f mat)
{
	t_mat3d		res;

	res.v[0] = vec3f_to_vec3d(mat.v[0]);
	res.v[1] = vec3f_to_vec3d(mat.v[1]);
	res.v[2] = vec3f_to_vec3d(mat.v[2]);
	return (res);
}

t_mat2d			mat2f_to_mat2d(t_mat2f mat)
{
	t_mat2d		res;

	res.v[0] = vec2f_to_vec2d(mat.v[0]);
	res.v[1] = vec2f_to_vec2d(mat.v[1]);
	return (res);
}
