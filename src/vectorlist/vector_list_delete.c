/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_list_delete.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 00:21:42 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/08 00:49:29 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfveclist.h"

void		vector_list_delete(t_vector_list *vector, size_t index)
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
}
