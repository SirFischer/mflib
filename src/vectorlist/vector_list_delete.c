/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_list_delete.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 00:21:42 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/08 00:58:33 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfveclist.h"

static t_bool		vector_list_decrease_size(t_vector_list *vector)
{
	void **tmp;

	if (!(tmp = (void **)realloc(vector->list,
		sizeof(void *) * (vector->capacity / 2))))
		return (FALSE);
	vector->list = tmp;
	vector->capacity /= 2.0;
	return (TRUE);
}

void				vector_list_delete(t_vector_list *vector, size_t index)
{
	if (index >= vector->size)
		return ;
	vector->list[index] = NULL;
	while (index < vector->size + 1)
	{
		vector->list[index] = vector->list[index + 1];
		vector->list[index + 1] = NULL;
		index++;
	}
	vector->size--;
	if (vector->size < (vector->capacity / 4))
		vector_list_decrease_size(vector);
}
