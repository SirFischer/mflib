/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matvec_multiply.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:24:22 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/13 14:51:52 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void	mat4vec4_multiply(double mat[4][4], double vec[4], double res[4])
{
	int i;
	int j;

	i = -1;
	vec4_init(res);
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			res[i] += mat[i][j] * vec[j];
		}
	}
}

void	mat3vec3_multiply(double mat[3][3], double vec[3], double res[3])
{
	int i;
	int j;

	i = -1;
	vec3_init(res);
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			res[i] += mat[i][j] * vec[j];
		}
	}
}

void	mat2vec2_multiply(double mat[2][2], double vec[2], double res[2])
{
	int i;
	int j;

	i = -1;
	vec2_init(res);
	while (++i < 2)
	{
		j = -1;
		while (++j < 2)
		{
			res[i] += mat[i][j] * vec[j];
		}
	}
}
