/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mfthreadpool.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 22:31:05 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/13 12:11:58 by mfischer         ###   ########.fr       */
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

typedef struct		s_work_pool
{
	int						top;
	t_thread_pool_work		*data;
	int						maxdata;
}					t_work_pool;

typedef struct		s_thread_pool
{
	t_bool			running;
	pthread_mutex_t	mtx_active;
	pthread_cond_t	cnd_active;
	t_thread_worker	*workers;
	pthread_mutex_t	mtx_work;
	t_work_pool		work_pool;
}					t_thread_pool;

t_thread_pool		*thread_pool_init(int worker_count, int max_job_count);
void				*thread_pool_workers_work(void *param);
void				thread_pool_add_work(t_thread_pool *pool,
											void (*f)(void *), void *param);
int					init_work_pool(t_work_pool *pool, int max_job_count);
void				thread_pool_push_work(t_thread_pool *pool, t_thread_pool_work work);
t_thread_pool_work	work_pool_pop(t_thread_pool *pool);

#endif
