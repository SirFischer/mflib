/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_list_init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:50:26 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/22 13:15:23 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfveclist.h"

t_bool			vector_list_init(t_vector_list *vector, size_t item_size)
{
	vector->capacity = VECTOR_LIST_INIT_CAPACITY;
	vector->size = 0;
	vector->item_size = item_size;
	if (!(vector->list = (char *)malloc(item_size
		* VECTOR_LIST_INIT_CAPACITY)))
		return (FALSE);
	return (TRUE);
}
