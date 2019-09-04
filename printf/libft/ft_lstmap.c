/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 11:07:44 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/12 11:26:35 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*begin;
	t_list	*new;
	t_list	*ptr;

	if (!lst || !f)
		return (NULL);
	begin = NULL;
	while (lst)
	{
		new = (*f)(lst);
		if (begin)
		{
			ptr->next = new;
			ptr = ptr->next;
		}
		else
		{
			begin = new;
			ptr = begin;
		}
		lst = lst->next;
	}
	return (begin);
}
