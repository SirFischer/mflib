/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_list_push.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:58:05 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/08 00:49:35 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfveclist.h"

static t_bool			vector_list_increase_size(t_vector_list *vector)
{
	void **tmp;

	if (!(tmp = (void **)realloc(vector->list,
		sizeof(void *) * vector->capacity * 2)))
		return (FALSE);
	vector->list = tmp;
	vector->capacity *= 2.0;
	return (TRUE);
}

t_bool			vector_list_push(t_vector_list *vector, void *data)
{
	if (vector->size == vector->capacity)
		if (!vector_list_increase_size(vector))
			return (FALSE);
	vector->list[vector->size++] = data;
	return (TRUE); 
}