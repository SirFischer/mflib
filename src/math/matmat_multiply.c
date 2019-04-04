/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matmat_multiply.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:28:08 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/04 22:42:04 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mymath.h"

void	mat4mat4_multiply(	double mat1[4][4],
							double mat2[4][4], double res[4][4])
{
	int i;
	int j;
	int k;

	i = -1;
	mat4_clear(res);
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			k = -1;
			while (++k < 4)
				res[i][j] += mat1[i][k] * mat2[k][j];
		}
	}
}

void	mat3mat3_multiply(	double mat1[3][3],
							double mat2[3][3], double res[3][3])
{
	int i;
	int j;
	int k;

	i = -1;
	mat3_clear(res);
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
		{
			k = -1;
			while (++k < 3)
				res[i][j] += mat1[i][k] * mat2[k][j];
		}
	}
}

void	mat2mat2_multiply(	double mat1[2][2],
							double mat2[2][2], double res[2][2])
{
	int i;
	int j;
	int k;

	i = -1;
	mat2_clear(res);
	while (++i < 2)
	{
		j = -1;
		while (++j < 2)
		{
			k = -1;
			while (++k < 2)
				res[i][j] += mat1[i][k] * mat2[k][j];
		}
	}
}
