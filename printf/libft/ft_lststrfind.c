/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:57:03 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/13 18:39:16 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lststrfind(t_list *begin_list, void *data_ref)
{
	t_list *list_ptr;

	list_ptr = begin_list;
	if (begin_list)
	{
		while (list_ptr != NULL)
		{
			if (ft_strcmp(list_ptr->content, data_ref) == 0)
				return (list_ptr);
			list_ptr = list_ptr->next;
		}
	}
	return (NULL);
}
