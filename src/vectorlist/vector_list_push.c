/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_list_push.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:58:05 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/22 13:53:39 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfveclist.h"

static t_bool			vector_list_increase_size(t_vector_list *vector)
{
	char *tmp;

	if (!(tmp = (char *)realloc(vector->list,
		vector->item_size * vector->capacity * 2)))
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
	mf_memcpy(vector->list + (vector->size * vector->item_size), data, vector->item_size);
	vector->size++;
	return (TRUE); 
}