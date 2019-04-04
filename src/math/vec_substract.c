/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_substract.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 17:29:17 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/04 22:28:15 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/math.h"

void			vec4vec4_substract(double minuend[4], double subtrahend[4], double difference[4])
{
	int i;

	i = -1;
	while (++i < 4)
		difference[i] = minuend[i] - subtrahend[i];
}

void			vec3vec3_substract(double minuend[3], double subtrahend[3], double difference[3])
{
	int i;

	i = -1;
	while (++i < 3)
		difference[i] = minuend[i] - subtrahend[i];
}

void			vec2vec2_substract(double minuend[2], double subtrahend[2], double difference[2])
{
	int i;

	i = -1;
	while (++i < 2)
		difference[i] = minuend[i] - subtrahend[i];
}
