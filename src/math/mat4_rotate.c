/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat4_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 23:03:42 by mfischer          #+#    #+#             */
/*   Updated: 2019/07/27 14:30:33 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void	mat4_rotate_yaw(double mat[4][4], double angle)
{
	double tmp[4][4];
	double res[4][4];
	double new_angle;

	new_angle = angle * 3.14159265359 / 180.0;
	mat4_init(tmp);
	tmp[1][1] = cos(new_angle);
	tmp[1][2] = -sin(new_angle);
	tmp[2][1] = sin(new_angle);
	tmp[2][2] = cos(new_angle);
	mat4mat4_multiply(tmp, mat, res);
	mat4_copy(mat, res);
}

void	mat4_rotate_pitch(double mat[4][4], double angle)
{
	double tmp[4][4];
	double res[4][4];
	double new_angle;

	new_angle = angle * 3.14159265359 / 180.0;
	mat4_init(tmp);
	tmp[0][0] = cos(new_angle);
	tmp[2][0] = -sin(new_angle);
	tmp[0][2] = sin(new_angle);
	tmp[2][2] = cos(new_angle);
	mat4mat4_multiply(tmp, mat, res);
	mat4_copy(mat, res);
}

void	mat4_rotate_roll(double mat[4][4], double angle)
{
	double tmp[4][4];
	double res[4][4];
	double new_angle;

	new_angle = angle * 3.14159265359 / 180.0;
	mat4_init(tmp);
	tmp[0][0] = cos(new_angle);
	tmp[0][1] = -sin(new_angle);
	tmp[1][0] = sin(new_angle);
	tmp[1][1] = cos(new_angle);
	mat4mat4_multiply(tmp, mat, res);
	mat4_copy(mat, res);
}

void	mat3_rotate(double mat[3][3], double angle)
{
	double tmp[3][3];
	double res[3][3];
	double new_angle;

	new_angle = angle * 3.14159265359 / 180.0;
	mat3_init(tmp);
	tmp[0][0] = cos(new_angle);
	tmp[0][1] = -sin(new_angle);
	tmp[1][0] = sin(new_angle);
	tmp[1][1] = cos(new_angle);
	mat3mat3_multiply(mat, tmp, res);
	mat3_copy(mat, res);
}
