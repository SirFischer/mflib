/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_list_init.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/07 22:50:26 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/08 00:50:04 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfveclist.h"

t_bool			vector_list_init(t_vector_list *vector)
{
	vector->capacity = VECTOR_LIST_INIT_CAPACITY;
	vector->size = 0;
	if (!(vector->list = (void **)malloc(sizeof(void *)
		* VECTOR_LIST_INIT_CAPACITY)))
		return (FALSE);
	return (TRUE);
}
