/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:28:53 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/04 22:42:22 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/mymath.h"

void			vec4vec4_add(double minuend[4], double subtrahend[4], double difference[4])
{
	int i;

	i = -1;
	while (++i < 4)
		difference[i] = minuend[i] + subtrahend[i];
}

void			vec3vec3_add(double minuend[3], double subtrahend[3], double difference[3])
{
	int i;

	i = -1;
	while (++i < 3)
		difference[i] = minuend[i] + subtrahend[i];
}

void			vec2vec2_add(double minuend[2], double subtrahend[2], double difference[2])
{
	int i;

	i = -1;
	while (++i < 2)
		difference[i] = minuend[i] + subtrahend[i];
}

