/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadpool_add_work.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 01:06:19 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 01:09:00 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfthreadpool.h"

void				thread_pool_add_work(t_thread_pool *pool,
											void (*f)(void *), void *param)
{
	pthread_mutex_lock(&pool->mtx_work);
	stack_push(pool, )
}