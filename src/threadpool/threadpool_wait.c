/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadpool_wait.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:31:32 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/14 09:33:08 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfthreadpool.h"
#include <stdio.h>

void	thread_pool_wait(t_thread_pool *pool)
{
	pthread_mutex_lock(&pool->mtx_wait);
	pool->wait = TRUE;
	while (pool->wait)
		pthread_cond_wait(&pool->cnd_wait, &pool->mtx_wait);
	pool->wait = TRUE;
	pthread_mutex_unlock(&pool->mtx_wait);
}
