/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mfthreadpool.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 22:31:05 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 00:38:55 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MFTHREADPOOL_H
# define MFTHREADPOOL_H

# include "boolean.h"
# include <pthread.h>
# include "mfstack.h"
# include "var.h"
# include <stdlib.h>

# define MAX_WORKER_COUNT	64
# define MAX_JOB_COUNT		16384

typedef struct		s_thread_worker
{
	int				id;
	pthread_t		thread;
}					t_thread_worker;

typedef struct		s_thread_pool_work
{
	void			*param;
	void			(*f)(void *);
}					t_thread_pool_work;

typedef struct		s_thread_pool
{
	t_bool			running;
	pthread_mutex_t	mtx_active;
	pthread_cond_t	cnd_active;
	t_thread_worker	*workers;
	pthread_mutex_t	mtx_work;
	t_stack			*work;
}					t_thread_pool;

t_thread_pool		*thread_pool_init(int worker_count, int max_job_count);
void				thread_pool_work(void *param);

#endif