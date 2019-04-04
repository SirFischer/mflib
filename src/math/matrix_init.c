/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 22:41:27 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/04 22:42:14 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mymath.h"

void			mat4_init(double mat[4][4])
{
	int i;
	int j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			mat[i][j] = (i == j) ? 1 : 0;
	}
}

void			mat3_init(double mat[3][3])
{
	int i;
	int j;

	i = -1;
	while (++i < 3)
	{
		j = -1;
		while (++j < 3)
			mat[i][j] = (i == j) ? 1 : 0;
	}
}

void			mat2_init(double mat[2][2])
{
	mat[0][0] = 1;
	mat[0][1] = 0;
	mat[1][0] = 0;
	mat[1][1] = 1;
}
