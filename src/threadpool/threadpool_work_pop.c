/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadpool_work_pop.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:48:18 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 23:08:55 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfthreadpool.h"
#include <stdio.h>

t_thread_pool_work		work_pool_pop(t_thread_pool *pool)
{
	t_thread_pool_work	work;

	work.f = NULL;
	work.param = NULL;
	if (pool->work_pool.top >= 0)
	{
		work = pool->work_pool.data[pool->work_pool.top];
		pool->work_pool.top--;
	}
	return (work);
}
