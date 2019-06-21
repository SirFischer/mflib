/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   var.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 23:40:10 by mfischer          #+#    #+#             */
/*   Updated: 2019/06/21 20:17:18 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VAR_H
# define VAR_H

# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

int					mf_clamp_int(int value, int min, int max);
double				mf_clamp_double(double value, double min, double max);
void				mf_swap_doubles(double *one, double *two, size_t n);
void				mf_swap_int(int *one, int *two, size_t n);
double				mf_min_double(int num, ...);
int					mf_min_int(int num, ...);
uint32_t			mf_wrap_around(uint32_t x, uint32_t N);

#endif