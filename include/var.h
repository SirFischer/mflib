/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 23:40:10 by mfischer          #+#    #+#             */
/*   Updated: 2019/04/24 00:04:03 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VAR_H
# define VAR_H

# include <stdlib.h>
# include <stdarg.h>

void				mf_swap_doubles(double *one, double *two, size_t n);
void				mf_swap_int(int *one, int *two, size_t n);
double				mf_min_double(int num, ...);
int					mf_min_int(int num, ...);

#endif