/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math_types.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfischer <mfischer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 00:10:46 by mfischer          #+#    #+#             */
/*   Updated: 2019/03/31 00:16:33 by mfischer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_TYPES_H
# define MATH_TYPES_H

typedef struct	s_vec2d
{
	double		x;
	double		y;
}				t_vec2d;

typedef struct	s_vec3d
{
	double		x;
	double		y;
	double		z;
}				t_vec3d;

typedef struct	s_vec4d
{
	double		x;
	double		y;
	double		z;
	double		w;
}				t_vec4d;

typedef struct	s_vec2i
{
	int			x;
	int			y;
}				t_vec2i;

typedef struct	s_vec3i
{
	int			x;
	int			y;
	int			z;
}				t_vec3i;

typedef struct	s_vec4i
{
	int			x;
	int			y;
	int			z;
	int			w;
}				t_vec4i;

typedef struct	s_rect_d
{
	double		x;
	double		y;
	double		w;
	double		h;
}				t_rect_d;

typedef struct	s_rect_i
{
	int			x;
	int			y;
	int			w;
	int			h;
}				t_rect_i;

#endif