/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list2_pop.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/19 20:39:12 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/19 20:46:05 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mflist2.h"

void				*list2_pop(t_list2 *list)
{
	t_node	*tmp;
	void	*data;

	if (!list->list)
		return (NULL);
	tmp = list->list;
	list->list = list->list->next;
	list->list->prev = NULL;
	data = list->list->data;
	free(tmp);
	return (data);
}
