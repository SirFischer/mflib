/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mfmemory.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/15 17:28:16 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/15 17:52:30 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MFMEMORY_H
# define MFMEMORY_H

# include <stdlib.h>

void                *mf_bzero(void *s, size_t n);
void                *mf_memset(void *b, int c, size_t len);
void				*mf_memalloc(size_t size);
void				*mf_memcpy(void *dst, const void *src, size_t n);

#endif
