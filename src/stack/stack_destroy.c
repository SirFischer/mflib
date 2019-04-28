/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_destroy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/16 11:42:53 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/28 20:00:59 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfstack.h"

void			stack_destroy(t_stack **stack)
{
	if (!stack || !*stack)
		return ;
	free(*stack);
	*stack = NULL;
}