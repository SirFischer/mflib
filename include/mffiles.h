/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mffiles.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 15:15:21 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/15 15:19:03 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MFFILES_H
# define MFFILES_H
# define BUFF_SIZE 32

# include <sys/types.h>
# include <sys/uio.h>
# include <unistd.h>
# include <stdlib.h>

int     get_next_line(const int fd, char **line);

#endif
