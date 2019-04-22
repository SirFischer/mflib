/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mf_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/22 15:27:32 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/22 15:30:20 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfmemory.h"

void				mf_swap_doubles(double *one, double *two, size_t n)
{
	size_t	i;
	double	tmp;

	i = -1;
	while (++i < n)
	{
		tmp = one[i];
		one[i] = two[i];
		two[i] = tmp;
	}
}

void				mf_swap_int(int *one, int *two, size_t n)
{
	size_t	i;
	double	tmp;

	i = -1;
	while (++i < n)
	{
		tmp = one[i];
		one[i] = two[i];
		two[i] = tmp;
	}
}
