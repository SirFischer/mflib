/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threadpool_wait.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:31:32 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 13:39:58 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mfthreadpool.h"

void	thread_pool_wait(t_thread_pool *pool)
{
	pthread_mutex_lock(&pool->mtx_wait);
	pthread_cond_wait(&pool->cnd_wait, &pool->mtx_wait);
	pthread_mutex_unlock(&pool->mtx_wait);
}
