/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matvec_multiply.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:24:22 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/11 01:09:17 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void	mat4vec4_multiply(double mat[4][4], double vec[4], double res[4])
{
	int i;
	int j;
	double tmp[4];

	i = -1;
	vec4_clear(tmp);
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			tmp[i] += mat[i][j] * vec[j];
		}
	}
	vec4_copy(res, tmp);
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
