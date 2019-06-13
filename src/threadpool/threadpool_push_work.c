/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadpool_push_work.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:42:28 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 11:48:20 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfthreadpool.h"

void		thread_pool_push_work(t_thread_pool *pool, t_thread_pool_work work)
{
	pthread_mutex_lock(&pool->mtx_work);
	if (pool->work_pool.top < pool->work_pool.maxdata - 1)
		pool->work_pool.data[++pool->work_pool.top] = work;
	pthread_mutex_unlock(&pool->mtx_work);
}
