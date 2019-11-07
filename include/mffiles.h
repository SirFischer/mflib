/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mffiles.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:15:21 by mfischer          #+#    #+#             */
/*   Updated: 2019/11/07 14:53:51 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MFFILES_H
# define MFFILES_H
# define BUFF_SIZE 4096

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <sys/uio.h>
# include <unistd.h>
# include "mfstring.h"
# include "mflist2.h"
# include <stdlib.h>

typedef struct  s_fd_buff
{
    int         fd;
    char        *buff;
}               t_fd_buff;

int			get_next_line(const int fd, char **line);

#endif
