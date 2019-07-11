/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matvec_multiply.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:24:22 by mfischer          #+#    #+#             */
/*   Updated: 2019/07/11 11:55:28 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void	mat4vec4_multiply(double mat[4][4], double vec[4], double res[4])
{
	int i;
	int j;
	double tmp[4];
	double *xpos;
	double	*ypos;

	i = -1;
	tmp[0] = 0;
	tmp[1] = 0;
	tmp[2] = 0;
	tmp[3] = 0;
	ypos = &mat[0][0];
	while (++i < 4)
	{
		xpos = vec;
		j = -1;
		while (++j < 4)
			tmp[i] += (*ypos++) * (*xpos++);
	}
	res[0] = tmp[0];
	res[1] = tmp[1];
	res[2] = tmp[2];
	res[3] = tmp[3];
}

void	mat3vec3_multiply(double mat[3][3], double vec[3], double res[3])
{
	int i;
	int j;
	double tmp[3];

	i = -1;
	vec3_clear(tmp);
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			tmp[i] += mat[i][j] * vec[j];
		}
	}
	vec3_copy(res, tmp);
}

void	mat2vec2_multiply(double mat[2][2], double vec[2], double res[2])
{
	int i;
	int j;
	double tmp[2];

	i = -1;
	vec2_clear(tmp);
	while (++i < 2)
	{
		j = -1;
		while (++j < 2)
		{
			tmp[i] += mat[i][j] * vec[j];
		}
	}
	vec2_copy(res, tmp);
}
