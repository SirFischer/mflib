/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_divide.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/17 16:23:29 by mfischer          #+#    #+#             */
/*   Updated: 2019/05/17 16:27:40 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void			vec4vec4_divide(double dividend[4], double divisor[4], double quotient[4])
{
	int i;

	i = -1;
	while (++i < 4)
		quotient[i] = dividend[i] / divisor[i];
}

void			vec3vec3_divide(double dividend[3], double divisor[3], double quotient[3])
{
	int i;

	i = -1;
	while (++i < 3)
		quotient[i] = dividend[i] / divisor[i];
}

void			vec2vec2_divide(double dividend[2], double divisor[2], double quotient[2])
{
	int i;

	i = -1;
	while (++i < 2)
		quotient[i] = dividend[i] / divisor[i];
}