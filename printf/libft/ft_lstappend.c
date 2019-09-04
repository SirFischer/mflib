/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstappend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-van- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 13:40:20 by kle-van-          #+#    #+#             */
/*   Updated: 2018/11/13 13:44:10 by kle-van-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstappend(t_list *list, t_list *new)
{
	t_list	*app;

	if (list && new)
	{
		app = list;
		while (app->next != NULL)
			app = app->next;
		app->next = new;
		new->next = NULL;
	}
}
