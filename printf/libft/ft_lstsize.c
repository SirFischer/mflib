/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 14:41:08 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/13 14:59:56 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *begin_list)
{
	int size;

	size = 0;
	if (begin_list)
	{
		while (begin_list)
		{
			size++;
			begin_list = begin_list->next;
		}
	}
	return (size);
}
