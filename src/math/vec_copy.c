/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/09 12:03:08 by mfischer          #+#    #+#             */
/*   Updated: 2019/05/18 16:17:58 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmath.h"

void	vec4_copy(double dest[4], double src[4])
{
	int i;

	i = -1;
	while (++i < 4)
		dest[i] = src[i];
}

void	vec3_copy(double dest[3], double src[3])
{
	int i;

	i = -1;
	while (++i < 3)
		dest[i] = src[i];
}

void	vec2_copy(double dest[2], double src[2])
{
	int i;

	i = -1;
	while (++i < 2)
		dest[i] = src[i];
}