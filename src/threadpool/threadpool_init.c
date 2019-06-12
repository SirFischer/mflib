/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadpool_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 23:53:21 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 01:05:11 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfthreadpool.h"

static t_thread_worker	*thread_pool_init_worker(int worker_count,
													t_thread_pool *pool)
{
	t_thread_worker		*workers;
	int					i;

	worker_count = mf_clamp_int(worker_count, 1, MAX_WORKER_COUNT);
	if (!(workers = (t_thread_worker *)malloc(sizeof(t_thread_worker)
	* worker_count)))
		return (NULL);
	i = -1;
	while (++i < worker_count)
	{
		pthread_create(&workers[i], NULL, thread_pool_workers_work, pool);
		workers[i].id = i;
	}
}

t_thread_pool			*thread_pool_init(int worker_count, int max_job_count)
{
	t_thread_pool	*res;

	if (!(res = (t_thread_pool *)malloc(sizeof(t_thread_pool))))
		return (NULL);
	pthread_cond_init(&res->cnd_active, NULL);
	pthread_mutex_init(&res->mtx_active, NULL);
	if (!(res->work = stack_create(
			mf_clamp_int(max_job_count, 1, MAX_JOB_COUNT))))
	{
		free(res);
		return (NULL);
	}
	if (!(res->workers = thread_pool_init_worker(worker_count)))
	{
		stack_destroy(&res->work);
		free(res);
		return (NULL);
	}
	res->running = TRUE;
}