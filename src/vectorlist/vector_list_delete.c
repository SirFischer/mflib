/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_list_delete.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 00:21:42 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/22 13:26:52 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfveclist.h"

static t_bool		vector_list_decrease_size(t_vector_list *vector)
{
	char *tmp;

	if (!(tmp = (char *)realloc(vector->list,
		vector->item_size * (vector->capacity / 2))))
		return (FALSE);
	vector->list = tmp;
	vector->capacity /= 2.0;
	return (TRUE);
}

void				vector_list_delete(t_vector_list *vector, size_t index)
{
	if (index >= vector->size)
		return ;
	mf_memcpy(vector->list + (vector->item_size * (index)),
				vector->list + (vector->item_size * (index + 1)),
				vector->item_size * (vector->capacity - index - 1));
	vector->size--;
	if (vector->size < (vector->capacity / 4))
		vector_list_decrease_size(vector);
}
