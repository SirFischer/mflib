/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadpool_workers_work.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 00:29:34 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 23:55:16 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfthreadpool.h"
# include <stdio.h>

void	*thread_pool_workers_work(void *param)
{
	t_thread_pool		*pool;
	t_thread_pool_work	work;

	pool = param;
	while (TRUE)
	{
		pthread_mutex_lock(&pool->mtx_work);
		if (pool->work_pool.top == -1 && pool->wait)
		{
			pthread_mutex_unlock(&pool->mtx_work);
			pthread_mutex_lock(&pool->mtx_active);
			while (!pool->work)
				pthread_cond_wait(&pool->cnd_active, &pool->mtx_active);
			pool->work = FALSE;
			pthread_mutex_unlock(&pool->mtx_active);
		}
		else
		{
			work = work_pool_pop(pool);
			pthread_mutex_unlock(&pool->mtx_work);
			if (work.f != NULL)
				work.f(work.param);
		}
	}
	return (NULL);
}
