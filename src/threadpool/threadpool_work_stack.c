/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadpool_work_stack.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:04:12 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 23:04:31 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfthreadpool.h"

int		init_work_pool(t_work_pool *pool, int max_job_count)
{
	max_job_count = mf_clamp_int(max_job_count, 1, MAX_JOB_COUNT);
	pool->top = -1;
	pool->maxdata = max_job_count;
	if (!(pool->data = (t_thread_pool_work *)malloc(sizeof(t_thread_pool_work) * max_job_count)))
		return (-1);
	return (0);
}
