/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_list_destroy.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 00:37:39 by mfischer          #+#    #+#             */
/*   Updated: 2019/09/08 00:49:51 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfveclist.h"

void			vector_list_destroy(t_vector_list *vector)
{
	if (vector->list)
		free(vector->list);
	vector->list = NULL;
}