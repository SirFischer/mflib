/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_clear.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 23:30:08 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/13 14:51:42 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void			mat4_clear(double mat[4][4])
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			mat[i][j] = 0;
	}
}

void			mat3_clear(double mat[3][3])
{
	int i;
	int j;

	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
			mat[i][j] = 0;
	}
}

void			mat2_clear(double mat[2][2])
{
	mat[0][0] = 0;
	mat[0][1] = 0;
	mat[1][0] = 0;
	mat[1][1] = 0;
}
