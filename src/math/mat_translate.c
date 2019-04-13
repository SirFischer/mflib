/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mat_translate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 22:26:49 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/13 14:51:23 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void	mat4_translate(double mat[4][4], double x, double y, double z)
{
	double tmp[4][4];
	double res[4][4];

	mat4_init(tmp);
	tmp[0][3] += x;
	tmp[1][3] += y;
	tmp[2][3] += z;
	mat4mat4_multiply(tmp, mat, res);
	mat4_copy(mat, res);
}

void	mat3_translate(double mat[3][3], double x, double y)
{
	double tmp[3][3];
	double res[3][3];

	mat3_init(tmp);
	tmp[0][2] += x;
	tmp[1][2] += y;
	mat3mat3_multiply(tmp, mat, res);
	mat3_copy(mat, res);
}
