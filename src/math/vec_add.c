/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_add.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 18:28:53 by mfischer          #+#    #+#             */
/*   Updated: 2019/05/17 16:40:24 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void			vec4vec4_add(double addend[4], double augend[4], double summand[4])
{
	int i;

	i = -1;
	while (++i < 4)
		summand[i] = addend[i] + augend[i];
}

void			vec3vec3_add(double addend[3], double augend[3], double summand[3])
{
	int i;

	i = -1;
	while (++i < 3)
		summand[i] = addend[i] + augend[i];
}

void			vec2vec2_add(double addend[2], double augend[2], double summand[2])
{
	int i;

	i = -1;
	while (++i < 2)
		summand[i] = addend[i] + augend[i];
}

