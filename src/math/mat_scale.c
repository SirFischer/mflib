/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_scale.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 22:33:25 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/04 22:41:49 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mymath.h"

void		mat4_scale(double mat[4][4], double x, double y, double z)
{
	double tmp[4][4];
	double res[4][4];

	mat4_init(tmp);
	mat[0][0] *= x;
	mat[1][1] *= y;
	mat[2][2] *= z;
	mat4mat4_multiply(mat, tmp, res);
	mat4_copy(mat, res);
}

void		mat3_scale(double mat[3][3], double x, double y)
{
	double tmp[3][3];
	double res[3][3];

	mat3_init(tmp);
	mat[0][0] *= x;
	mat[1][1] *= y;
	mat3mat3_multiply(mat, tmp, res);
	mat3_copy(mat, res);
}
