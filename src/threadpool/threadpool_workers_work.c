/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadpool_workers_work.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 00:29:34 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 16:24:36 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfthreadpool.h"
# include <stdio.h>

void	*thread_pool_workers_work(void *param)
{
	t_thread_pool		*pool;
	t_thread_pool_work	work;
	printf("thread created!\n");

	pool = param;
	while (TRUE)
	{
		pthread_mutex_lock(&pool->mtx_active);
		pool->active_threads++;
		while (!pool->work)
			pthread_cond_wait(&pool->cnd_active, &pool->mtx_active);
		pool->work = FALSE;
		pool->active_threads--;
		pthread_mutex_unlock(&pool->mtx_active);
		pthread_mutex_lock(&pool->mtx_work);
		work = work_pool_pop(pool);
		pthread_mutex_unlock(&pool->mtx_work);
		if (work.f != NULL)
		{
			work.f(work.param);
		}
		if (pool->active_threads == 0 && pool->work_pool.top == -1)
		{
			pthread_mutex_lock(&pool->mtx_wait);
			pool->wait = FALSE;
			pthread_cond_broadcast(&pool->cnd_wait);
			pthread_mutex_unlock(&pool->mtx_wait);
		}
	}
	return (NULL);
}
