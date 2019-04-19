/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mfstring.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/06 19:27:14 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/19 22:57:20 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MFSTRING_H
# define MFSTRING_H

# include <unistd.h>
# include <stdlib.h>
# include <boolean.h>

char	*mf_itoa(int num);
void	mf_itoa_s(int num, char *res);
char	*mf_strnew(size_t size);
char    *mf_strchr(const char *s, int c);
char    *mf_strcpy(char *dst, const char *src);
void    mf_strclr(char *s);
char    *mf_strdup(const char *s1);
size_t  mf_strlen(const char *s);
char    *mf_strjoin(char const *s1, char const *s2);
int		mf_atoi(const char *str);
t_bool	mf_isspace(const char c);

#endif
