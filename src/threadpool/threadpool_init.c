/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadpool_init.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 23:53:21 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 00:26:52 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfthreadpool.h"

t_thread_pool		*thread_pool_init(int worker_count, int max_job_count)
{
	t_thread_pool	*res;

	if (!(res = (t_thread_pool *)malloc(sizeof(t_thread_pool))))
		return (NULL);
	if (!(res->work = stack_create(
			mf_clamp_int(max_job_count, 1, MAX_JOB_COUNT))))
	{
		free(res);
		return (NULL);
	}
	if (!(res->workers = (t_thread_worker *)malloc(sizeof(t_thread_worker)
			* mf_clamp_int(worker_count, 1, MAX_WORKER_COUNT))))
	{
		stack_destroy(&res->work);
		free(res);
		return (NULL);
	}
}